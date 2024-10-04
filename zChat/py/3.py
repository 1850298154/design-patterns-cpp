# 定义服务接口
class UserRepository:
    def save(self, user):
        raise NotImplementedError

# 实现服务接口
class UserRepositoryImpl(UserRepository):
    def save(self, user):
        print(f"User saved: {user.name}")

# 定义服务定位器
class ServiceLocator:
    _services = {}

    @classmethod
    def register_service(cls, service_name, service_instance):
        cls._services[service_name] = service_instance

    @classmethod
    def get_service(cls, service_name):
        service_instance = cls._services.get(service_name)
        if not service_instance:
            raise ValueError(f"Service {service_name} not found")
        return service_instance

# 定义一个User类
class User:
    def __init__(self, name):
        self.name = name

# 使用示例
if __name__ == "__main__":
    # 注册服务
    user_repository = UserRepositoryImpl()
    ServiceLocator.register_service("UserRepository", user_repository)

    # 获取服务
    user_repository = ServiceLocator.get_service("UserRepository")

    # 使用服务
    user = User("John Doe")
    user_repository.save(user)