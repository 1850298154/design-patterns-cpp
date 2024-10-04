# 核心

## GOF 设计模式

• 历史性著作《设计模式：可复用面向对象软
件的基础》一书中描述了23种经典面向对象
设计模式，创立了模式在软件设计中的地位。

• 由于《设计模式》一书确定了设计模式的地
位，通常所说的设计模式隐含地表示“面向
对象设计模式”。但这并不意味“设计模式”
就等于“面向对象设计模式”。

例如：
过程设计模式，
架构模式，
数据库模式，

## 底层思维抽象思维

底层思维：向下，如何把握机器底层  从微观理解  对象构造

• 语言构造

• 编译转换

• 内存模型

• 运行时机制

异常处理、java垃圾收集器进行内存管理

## 抽象思维

抽象思维：向上，如何将我们的周围世界抽象为程序代码

• 面向对象

• 组件封装

• 设计模式

• 架构模式

## 深入理解面向对象

向下 ：深入理解三大面向对象机制

·封装，隐藏内部实现

·继承，复用现有代码

·多态，改写对象行为

向上 ：深刻把握面向对象机制所带来的抽象意义，理解如何使用
这些机制来表达现实世界，掌握什么是“好的面向对象设计”

## 软件设计固有的复杂性

建筑商从来不会去想给一栋已建好的100层高的
楼房底下再新修一个小地下室——这样做花费
极大而且注定要失败。然而令人惊奇的是，软件
系统的用户在要求作出类似改变时却不会仔细考
虑，而且他们认为这只是需要简单编程的事。

——Object-Oriented Analysis and Design
with Applications

Grady Booch

## 软件设计复杂的根本原因

• 客户需求的变化

• 技术平台的变化

• 开发团队的变化

• 市场环境的变化

## GOF-23 模式分类

### 从目的来看

·创建型（ Creational ）模式：将对象的部分   创建工作  延迟到子
类或者其他对象 ，从而应对需求变化为对象创建时具体类型实
现引|来的冲击。

· 结构型（ Structural ）模式：通过类继承或者对象组合获得更灵
活的结构，从而应对   需求变化   为对象的结构带来的冲击。

·行为型（ Behavioral ）模式：通过类继承或者对象组合来划分
类与对象间的职责，从而应对需求变化为多个   交互   的对象带来
的冲击。

### 从范围来看

·类模式处理类与子类的静态关系。

·对象模式处理对象间的动态关系。

## 重构获得模式 Refactoring to Patterns

设计模式的应用不宜先入为主，一上来就使用设计模式是对设计
模式的最大误用。没有一步到位的设计模式。   敏捷软件开发   实践提
倡的“Refactoring to Patterns”是目前普遍公认的最好的使用设
计模式的方法。

## 重构关键技法

从不同角度看待同一个问题

------
静态            动态

早绑定          晚绑定

编译时依赖      运行时依赖

------
继承            组合

紧耦合          松耦合

这五种重构设计的对比可以从不同的角度看待同一个问题，主要体现在
如何组织和管理
    代码结构、
    依赖关系 以及
    灵活性。
下面是对每一对的详细解释：

### 1. 静态 vs 动态

- **静态**：
  - 在编译时确定类型和关系，
  - 通常意味着较高的性能和安全性，
  - 但灵活性较低。
- **动态**：
  - 在运行时决定类型和关系，
  - 提供更大的灵活性和可扩展性，
  - 但可能带来性能开销。

### 2. 早绑定 vs 晚绑定

- **早绑定**：
  - 在编译时确定方法的调用，
  - 通常通过静态类型检查实现，
  - 能够提供更好的性能和类型安全。
- **晚绑定**：
  - 在运行时确定方法的调用，
  - 使用多态（如虚函数），
  - 可以提高灵活性和可扩展性，
  - 但可能导致性能下降。

### 3. 继承 vs 组合

- **继承**：
  - 通过子类化父类来实现代码重用，
  - 建立了“是一个”的关系，
  - 有助于构建层次结构，
  - 但容易导致紧耦合和不灵活。
- **组合**：
  - 通过将对象组合在一起以实现功能，
  - 建立了“有一个”的关系，
  - 更加灵活，
  - 有助于实现松耦合，
  - 便于维护和扩展。

### 4. 编译时依赖 vs 运行时依赖

- **编译时依赖**：
  - 在编译过程中确定依赖关系，
  - 通常意味着更高的效率和安全性，
  - 但难以适应变化。
- **运行时依赖**：在
  - 运行时确定依赖关系，
  - 可以实现更大的灵活性和动态性，
  - 适应变化的能力强，
  - 但可能导致潜在的错误和性能问题。

### 5. 紧耦合 vs 松耦合

- **紧耦合**：
  - 组件之间的依赖关系很强，
  - 相互之间高度依赖，
  - 修改一个组件可能引发其他组件的变化，
  - 维护困难。
- **松耦合**：
  - 组件之间的依赖关系较弱，
  - 各自独立，
  - 修改一个组件时对其他组件的影响较小，
  - 有利于系统的扩展和维护。

### 总结

这五组设计理念分别从不同的角度探讨了软件设计中的重要问题，如
    灵活性、
    性能、
    安全性、
    可维护性和
    可扩展性
。理解和权衡这些不同的设计思路可以帮助开发者制定更合适的解决方案，以适应具体的应用场景和需求。

## 动态、晚绑定和运行时依赖

动态、晚绑定和运行时依赖的特性确实可能导致性能下降，主要原因包括以下几点：

### 1. 运行时类型检查

- **描述**：
  - 在动态和晚绑定中，
  - 系统需要在运行时进行类型检查，
  - 以确定对象的真实类型。
  - 这会增加额外的开销。
- **影响**：
  - 每次调用方法时，
  - 都要确定该方法的实际执行路径，
  - 尤其是在多态情况下，
  - 这会消耗 CPU 时间。

### 2. 方法查找

- **描述**：
  - 在晚绑定中，
  - 特别是使用虚函数的情况下，
  - 系统需要通过虚表（vtable）查找正确的函数地址。
- **影响**：
  - 这个查找过程比直接调用静态绑定的函数慢，
  - 因为它涉及到额外的指针解引用和查找操作。

### 3. 动态内存管理

- **描述**：
  - 运行时依赖通常需要动态分配内存，
  - 例如使用工厂模式或依赖注入时。
- **影响**：
  - 动态内存分配和管理（如分配、释放内存）比静态分配慢，
  - 并且可能导致内存碎片，
  - 从而影响性能。

### 4. 缓存局部性

- **描述**：
  - 静态绑定往往可以更好地利用 CPU 缓存，
  - 因为相关数据和代码在内存中的位置是固定的。
- **影响**：
  - 动态和运行时依赖可能导致数据和代码的访问模式不够规律，
  - 从而降低缓存命中率，
  - 导致性能下降。

### 5. 增加的复杂性

- **描述**：
  - 在动态和晚绑定的设计中，
  - 程序的控制流变得更加复杂。
- **影响**：
  - 这种复杂性可能导致优化编译器无法有效地进行某些优化，
  - 进一步影响运行效率。

### 总结

虽然动态和晚绑定提供了灵活性和可扩展性，但这些特性伴随而来的性能开销在某些性能敏感的场景中可能会显著影响程序的整体表现。因此，在选择这些技术时，需要权衡灵活性与性能之间的关系。

## 系统、组件和模块

系统、组件和模块的划分单位主要基于它们之间的通信和交互方式。以下是对这三者划分依据的详细解释：

### 1. 系统 (System)

- **通信/交互级别**：高层次交互
- **划分依据**：
  - **功能性**：系统通常是为满足特定业务需求而设计的整体解决方案，包含多个子系统（组件）。
  - **接口与协议**：系统间可能通过网络协议（如HTTP、RESTful API）或消息队列进行通信。
  - **用户交互**：系统通常直接与用户交互，提供完整的用户体验。

### 2. 组件 (Component)

- **通信/交互级别**：中层次交互
- **划分依据**：
  - **功能聚合**：组件通常封装了一组相关的功能，并通过明确的接口进行交互。组件之间的通信可以是同步的（如调用方法）或异步的（如事件驱动）。
  - **服务接口**：组件往往依赖服务接口（如API）来进行交互，以实现松耦合。
  - **数据共享**：组件之间可以通过共享数据结构或协议进行信息交换。

### 3. 模块 (Module)

- **通信/交互级别**：低层次交互
- **划分依据**：
  - **内部实现**：模块是更细粒度的功能单元，通常在同一代码库内操作，关注的是具体实现细节。
  - **函数调用**：模块之间的交互大多通过函数调用或类实例之间的直接调用实现。这种交互通常发生在内存中，性能较高。
  - **作用域与命名空间**：模块通常在一个特定的作用域内工作，通过命名空间或模块名进行区分和调用。

### 总结

- **系统**：基于高层次的用户需求和跨系统的交互。
- **组件**：基于功能聚合和中层次的接口交互。
- **模块**：基于具体实现和低层次的函数调用。

这种划分有助于开发人员理解不同层级之间的关系，从而设计出更清晰、更可维护的软件架构。

## 服务接口（API）

服务接口（API）有多种形式，主要可以根据其通信方式、数据格式和用途进行分类。以下是一些常见的API形式：

### 1. **基于协议的API**

- **RESTful API**：
  - 使用HTTP协议，以资源为中心，支持CRUD操作（创建、读取、更新、删除）。
  - 通常返回JSON或XML格式的数据。
  
- **SOAP API**：
  - 基于XML的协议，具有严格的消息格式和标准。
  - 支持复杂的操作和安全性特性（如WS-Security）。

- **GraphQL**：
  - 一种用于API的查询语言，客户端可以指定所需的数据结构，减少数据传输量。
  - 提供单个端点，允许对多个资源进行查询。

### 2. **远程过程调用 (RPC)**

- **gRPC**：
  - Google开发的高性能、开源的RPC框架，使用Protocol Buffers作为接口定义语言。
  - 支持多种语言，并且提供流式传输和双向通信。

- **JSON-RPC / XML-RPC**：
  - 简单的远程过程调用协议，允许通过JSON或XML格式发送请求和响应。

### 3. **WebSocket API**

- 提供全双工的通信通道，适合实时应用（如聊天应用、在线游戏）。
- 允许客户端与服务器之间的持续连接。

### 4. **事件驱动API**

- **Webhook**：
  - 服务器主动向客户端发送数据，通常在某些事件发生时触发（如用户注册、订单创建）。
  
- **Server-Sent Events (SSE)**：
  - 服务器通过HTTP向客户端推送实时更新，适合单向数据流。

### 5. **库和框架级API**

- **SDK（软件开发工具包）**：
  - 提供一组工具和库，帮助开发者更容易地构建应用程序，通常包括API调用的封装。

### 6. **平台特定API**

- **操作系统API**：
  - 如Windows API、Linux系统调用，提供操作系统功能的访问。

- **云服务API**：
  - 如AWS SDK、Azure REST API，提供对云服务的访问和管理。

### 总结

不同类型的API适用于不同的场景和需求。选择合适的API形式可以提高系统的灵活性、可扩展性和性能。

## 早绑定

### 早绑定的优缺点

#### 优点

1. **性能**：

- 由于在编译时已经确定了方法调用，
- 早绑定通常比晚绑定具有更高的执行效率。
- 没有运行时查找的开销。

2. **类型安全**：

- 编译时检查可以捕获类型错误，
- 提高代码的安全性和可靠性。
- 减少运行时错误的可能性。

3. **可读性**：

- 代码的控制流在编译时就已经确定，
- 使得代码更容易理解和维护。
- 开发者可以更清晰地看到方法调用的路径。

#### 缺点

1. **灵活性**：

- 早绑定缺乏灵活性，
- 难以适应运行时的变化。
- 无法根据运行时的条件动态选择方法。

2. **扩展性**：

- 由于方法调用在编译时已经确定，
- 扩展系统功能时可能需要修改现有代码。
- 增加了维护成本。

3. **多态性**：

- 早绑定限制了多态性的使用，
- 无法充分利用面向对象编程中的多态特性。
- 影响代码的可扩展性和复用性。

### 适用场景

- **性能关键的应用**：
  - 需要高性能和低延迟的场景，
  - 如实时系统、嵌入式系统。
  
- **类型安全要求高的应用**：
  - 需要在编译时捕获类型错误，
  - 提高系统的安全性和可靠性。

- **代码稳定性要求高的应用**：
  - 需要明确的控制流和方法调用路径，
  - 便于代码的维护和理解。

### 总结

早绑定在性能、类型安全和代码可读性方面具有明显优势，但在灵活性和扩展性方面存在一定的局限性。开发者需要根据具体的应用场景和需求，权衡早绑定和晚绑定的优缺点，选择合适的技术方案。

早绑定：编译时确定，速度快，灵活性低。
晚绑定：运行时确定，速度慢，灵活性高。

结构化软件设计是一种强调模块化和分层的方法，旨在提高软件的可维护性、可理解性和可重用性。除了结构化软件设计，还有其他几种软件设计方法，各自有不同的特点和适用场景。以下是一些常见的软件设计方法以及它们之间的比较：

### 1. 结构化软件设计

- **特点**：
  - 强调使用模块（函数）来分解问题。
  - 采用自顶向下的设计方法，从高层次到低层次逐步细化。
  - 使用控制流图（如数据流图）表示系统的运行逻辑。
  
- **优点**：
  - 易于理解和维护。
  - 通过模块化降低复杂度。

- **缺点**：
  - 对于大型系统可能不够灵活，难以应对变化。

### 2. 面向对象设计 (OOP)

- **特点**：
  - 通过对象和类来组织代码，关注数据及其操作。
  - 强调封装、继承和多态等特性。
  
- **优点**：
  - 促进代码重用和扩展。
  - 更好地模型现实世界的对象。

- **缺点**：
  - 学习曲线相对较陡，可能导致额外的开销。

### 3. 组件化设计

- **特点**：
  - 系统被分解为独立的可重用组件，可以单独开发、测试和维护。
  - 组件之间通过定义良好的接口进行交互。
  
- **优点**：
  - 提高了系统的可维护性和可扩展性。
  - 方便团队协作，允许并行开发。

- **缺点**：
  - 设计和集成时可能需要处理接口不兼容的问题。

### 4. 服务导向架构 (SOA)

- **特点**：
  - 系统被构建为一组服务，服务之间通过网络进行通信。
  - 强调服务的独立性和重用性。
  
- **优点**：
  - 高度松耦合，易于扩展和维护。
  - 可以支持异构环境中的不同技术。

- **缺点**：
  - 网络通信引入延迟，可能影响性能。
  - 设计和管理服务的复杂性增加。

### 5. 微服务架构

- **特点**：
  - 将应用程序分解为多个小型服务，每个服务独立部署和管理。
  - 每个微服务专注于特定业务功能，通常使用不同的技术栈。
  
- **优点**：
  - 提高了敏捷性和可扩展性。
  - 方便团队独立开发和快速迭代。

- **缺点**：
  - 复杂的服务管理和数据一致性问题。
  - 需要强大的监控和调试工具。

### 6. 事件驱动架构 (EDA)

- **特点**：
  - 系统通过事件进行通信和处理，组件之间基于事件进行交互。
  - 支持异步处理和实时响应。
  
- **优点**：
  - 灵活性高，可以轻松适应变化。
  - 高度解耦，有助于实现实时系统。

- **缺点**：
  - 事件流和状态管理可能导致复杂性增加。
  - 难以调试和追踪事件流。

### 总结

不同的软件设计方法具有各自的优缺点，适用于不同类型的项目和需求。选择合理的方法取决于项目规模、团队结构、技术栈以及业务需求等因素。结构化软件设计适合较简单和小型项目，而面向对象设计和微服务架构更适合复杂和大型系统的开发。

##  注入

依赖注入（Dependency Injection, DI）是一种软件设计模式，它通过将对象的依赖关系从类内部转移到外部来提高代码的灵活性和可测试性。以下是几种常见的依赖注入方式，并附有示例代码。

### 1. 构造函数注入

使用构造函数将依赖项作为参数传递给类。

```cpp
#include <iostream>

// 依赖接口
class IService {
public:
    virtual void execute() = 0;
};

// 具体实现
class ServiceA : public IService {
public:
    void execute() override {
        std::cout << "ServiceA executed!" << std::endl;
    }
};

// 客户类，依赖于 IService
class Client {
private:
    IService* service;
public:
    Client(IService* svc) : service(svc) {} // 构造函数注入

    void doWork() {
        service->execute();
    }
};

int main() {
    ServiceA serviceA;
    Client client(&serviceA);
    client.doWork(); // 输出: ServiceA executed!
    return 0;
}
```

### 2. Setter 注入

使用 setter 方法来设置依赖项。

```cpp
class Client {
private:
    IService* service;
public:
    void setService(IService* svc) { // Setter 注入
        service = svc;
    }

    void doWork() {
        if (service) {
            service->execute();
        }
    }
};

int main() {
    ServiceA serviceA;
    Client client;
    client.setService(&serviceA); // 通过 setter 设置依赖
    client.doWork(); // 输出: ServiceA executed!
    return 0;
}
```

### 3. 接口注入

通过定义一个接口来注入依赖项。

```cpp
class IInjectable {
public:
    virtual void inject(IService* svc) = 0;
};

class Client : public IInjectable {
private:
    IService* service;
public:
    void inject(IService* svc) override { // 接口注入
        service = svc;
    }

    void doWork() {
        if (service) {
            service->execute();
        }
    }
};

int main() {
    ServiceA serviceA;
    Client client;
    client.inject(&serviceA); // 通过接口注入依赖
    client.doWork(); // 输出: ServiceA executed!
    return 0;
}
```

### 4. 使用容器（如 Google Guice 或 Spring）

在大型项目中，可以使用依赖注入容器来管理依赖关系。这种方法通常会涉及到更多的配置，但可以显著减少手动管理依赖的复杂性。

#### 示例（伪代码）：

```cpp
// 伪代码表示容器的使用
class DependencyInjector {
public:
    IService* getService() {
        return new ServiceA(); // 返回具体服务实例
    }

    Client* createClient() {
        return new Client(getService()); // 自动注入依赖
    }
};

int main() {
    DependencyInjector di;
    Client* client = di.createClient();
    client->doWork(); // 输出: ServiceA executed!
    
    delete client; // 记得清理内存
    return 0;
}
```

### 小结

依赖注入有助于解耦代码，提高模块化和可测试性。选择合适的依赖注入方式取决于你的应用程序规模、复杂性、团队的熟悉程度等因素。在小型项目中，简单的构造函数或 setter 注入通常就足够了，而在大型项目中，使用容器可能更为方便。

## virtual override

在 C++ 中，关于 `override` 关键字的使用及其与虚函数（`virtual`）的关系，下面是一些重要的概念：

### 1. 虚函数和纯虚函数

- **虚函数**：在基类中声明为 `virtual` 的函数，可以在派生类中被重写。即使没有使用 `override` 关键字，派生类中的函数仍然会被视为对基类虚函数的重写。

- **纯虚函数**：在基类中声明为 `virtual` 并赋值为 0 的函数，表示该函数没有实现，必须在派生类中实现。此时，派生类实现这个函数时，使用 `override` 是推荐的做法，但不是强制的。

### 2. `override` 的作用

- **可读性**：使用 `override` 可以清楚地表明这个函数是重写父类的虚函数，增加代码的可读性。

- **编译器检查**：如果你在派生类中声明了一个函数，并且使用了 `override`，编译器会检查这个函数是否确实重写了基类中的虚函数。如果没有匹配的虚函数，编译器会报错。这可以帮助捕捉到因函数签名不匹配而导致的错误。

### 3. 使用 `virtual` 关键字

- 在派生类中，可以选择性地使用 `virtual` 关键字。虽然可以在派生类中再次声明为 `virtual`，但这没有必要，因为它已经隐含了虚函数的特性。

- 一般来说，除非需要重新定义该函数为虚函数（通常不需要），否则只需实现该函数即可。

### 示例代码

```cpp
#include <iostream>

class Base {
public:
    virtual void show() { // 虚函数
        std::cout << "Base show" << std::endl;
    }

    virtual void pureShow() = 0; // 纯虚函数
};

class Derived : public Base {
public:
    void show() override { // 使用 override 推荐
        std::cout << "Derived show" << std::endl;
    }

    void pureShow() override { // 纯虚函数的实现
        std::cout << "Derived pureShow" << std::endl;
    }
};

int main() {
    Derived d;
    d.show();      // 输出: Derived show
    d.pureShow();  // 输出: Derived pureShow
    return 0;
}
```

### 总结

- 使用 `override` 不仅是良好的编码习惯，还有助于提高代码安全性。
- 在派生类中可以省略 `virtual`，因为虚函数的特性已经由基类继承。
- 强烈建议在重写基类虚函数时使用 `override`，以避免潜在的错误。

## 多继承

一个主的继承类，其他都是接口（或者是抽象基类|接口）


## 先 声明 ， 后 使用

在 C++ 中，确实需要先声明后使用，具体来说，有以下几个要点：

### 1. 函数声明

- **函数声明**：如果你想在某个函数中调用另一个函数，该函数必须在调用之前被声明。可以通过函数原型进行声明。例如：

```cpp
#include <iostream>

void myFunction(); // 函数声明

int main() {
    myFunction(); // 调用 myFunction
    return 0;
}

void myFunction() { // 函数定义
    std::cout << "Hello, World!" << std::endl;
}
```

### 2. 类和成员函数

- 对于类中的成员函数，也需要在使用之前进行声明。这可以通过类的定义来实现。

```cpp
#include <iostream>

class MyClass {
public:
    void myMethod(); // 成员函数声明
};

void MyClass::myMethod() { // 成员函数定义
    std::cout << "MyClass method called." << std::endl;
}

int main() {
    MyClass obj;
    obj.myMethod(); // 调用 myMethod
    return 0;
}
```

### 3. 作用域和链式调用

- 如果你在一个函数内部定义了另一个函数，必须在调用之前完成该函数的定义或声明。

### 4. 前向声明

- 在某些情况下，可以使用前向声明（forward declaration）来解决循环依赖的问题，尤其是在涉及到类之间的引用时。

```cpp
class B; // 前向声明

class A {
public:
    void doSomething(B* b); // 使用 B 的指针，但没有完整定义 B
};

class B {
public:
    void doSomething() {}
};
```

### 总结

- **先声明后使用**：在 C++ 中，必须先声明（或定义）函数/类/变量，然后才能在代码中使用它们。
- **前向声明**：可以用来解决某些依赖关系，但仍需在使用前确保相关类型已被声明。

这使得编译器能够理解每个标识符的含义，从而避免未定义行为和编译错误。

## 循环引用

在 C++ 和 Python 中，循环引用的概念和处理方式是不同的，但并不能简单地说 Python 不支持循环引用，而是它们对循环引用的管理方式有显著的区别。

### C++ 中的循环引用

- **C++**：在 C++ 中，你可以创建循环引用（例如，通过使用指针或智能指针）。但是需要注意的是，如果使用原始指针，可能会导致内存泄漏，因为两个对象可能会相互持有对方的引用。使用智能指针（如 `std::shared_ptr`）时，如果没有妥善管理，仍然可能导致循环引用的问题（特别是 `std::shared_ptr`），这通常需要使用 `std::weak_ptr` 来打破循环。

```cpp
#include <iostream>
#include <memory>

class B; // 前向声明

class A {
public:
    std::shared_ptr<B> b_ptr; // 循环引用
};

class B {
public:
    std::shared_ptr<A> a_ptr; // 循环引用
};

int main() {
    std::shared_ptr<A> a = std::make_shared<A>();
    std::shared_ptr<B> b = std::make_shared<B>();

    a->b_ptr = b;
    b->a_ptr = a; // 循环引用

    return 0; // 这里会导致内存泄漏，因为 A 和 B 相互引用
}
```

### Python 中的循环引用

- **Python**：Python 支持循环引用，尤其是在使用类和对象时。例如，两个对象可以相互引用而不会引发错误。Python 的垃圾回收机制能够处理循环引用，因为它使用了引用计数和垃圾回收的结合。当没有任何对象再引用那部分内存时，循环引用的对象将被回收。

```python
class A:
    def __init__(self):
        self.b = None

class B:
    def __init__(self):
        self.a = None

a = A()
b = B()

a.b = b
b.a = a  # 循环引用

# Python 会正确处理这个情况，并且在不再需要时释放内存
```

### 总结

- **循环引用**：C++ 可以创建循环引用，但是需要小心管理内存，避免内存泄漏。Python 也允许循环引用，且其垃圾回收机制能够处理这些情况。
- **内存管理**：C++ 需要手动管理内存，而 Python 则通过自动垃圾回收来处理内存。

因此，不能简单地说 Python 不支持循环引用，实际上它是支持的，但 Python 对此的处理机制要更为自动化和安全。

## 前向声明

在 Python 中，尽管没有像 C++ 中的前向声明那样的语法，但可以通过一些方式实现类似的效果，以确保在循环引用的情况下能够正确地引用类型。

### 使用字符串注解

Python 3.7 引入了 `from __future__ import annotations`，允许使用字符串来延迟类型注解。这种方式可以避免在类定义时遇到未定义的名称错误。

```python
from __future__ import annotations

class A:
    def __init__(self):
        self.b: B = None  # 使用字符串进行延迟类型注解

class B:
    def __init__(self):
        self.a: A = None  # 使用字符串进行延迟类型注解

# 示例
a = A()
b = B()

a.b = b
b.a = a  # 循环引用
```

### 使用类型提示模块

在 Python 3.5 及更高版本中，可以使用 `typing` 模块中的 `TYPE_CHECKING` 来处理类型引用。这样可以避免循环导入的问题。

```python
from typing import TYPE_CHECKING

if TYPE_CHECKING:
    from b import B  # 假设 B 定义在另一个文件中

class A:
    def __init__(self):
        self.b: B  # 类型提示

# b.py 文件
class B:
    def __init__(self):
        self.a: A  # 类型提示
```

### 总结

虽然 Python 没有直接的前向声明机制，但可以通过字符串注解和 `typing` 模块中的工具来实现类似的功能。这使得可以在存在循环引用的情况下保持类型安全。



## 在不同开发层次中使用的具体技术名称

好的，以下是补全后的内容，展示了在不同开发层次中使用的具体技术名称：

```markdown
过程  回调函数（Callback Functions）
对象  抽象接口（Abstract Interfaces）
模块  模板方法模式（Template Method Pattern）
组件  依赖注入（Dependency Injection, DI）
系统  服务总线（Service Bus）
```

### 具体技术名称
- **过程（Procedure）**：
  - **回调函数（Callback Functions）**：在JavaScript中，常用回调函数来处理异步操作，例如`setTimeout`、`setInterval`、事件处理等。

- **对象（Object）**：
  - **抽象接口（Abstract Interfaces）**：在Java中，使用接口（`interface`）来定义抽象接口，具体类实现这些接口。例如，`List`接口由`ArrayList`和`LinkedList`实现。

- **模块（Module）**：
  - **模板方法模式（Template Method Pattern）**：在Java中，使用抽象类和抽象方法来实现模板方法模式。例如，`java.util.AbstractList`类定义了模板方法，具体的`ArrayList`和`LinkedList`类实现具体步骤。

- **组件（Component）**：
  - **依赖注入（Dependency Injection, DI）**：在Spring框架中，使用依赖注入来管理组件之间的依赖关系。例如，通过`@Autowired`注解将依赖注入到Spring Bean中。

- **系统（System）**：
  - **服务总线（Service Bus）**：在企业级应用中，使用Azure Service Bus或Apache Kafka等服务总线来实现系统间的松耦合通信。

### 示例代码
以下是一些具体技术的示例代码：

#### 回调函数（JavaScript）
```javascript
function fetchData(callback) {
    setTimeout(() => {
        const data = "Hello, World!";
        callback(data);
    }, 1000);
}

fetchData((data) => {
    console.log(data);
});
```

#### 抽象接口（Java）
```java
interface Animal {
    void makeSound();
}

class Dog implements Animal {
    @Override
    public void makeSound() {
        System.out.println("Woof");
    }
}

class Cat implements Animal {
    @Override
    public void makeSound() {
        System.out.println("Meow");
    }
}
```

#### 模板方法模式（Java）
```java
abstract class DataProcessor {
    public final void process() {
        readData();
        processData();
        writeData();
    }

    protected abstract void readData();
    protected abstract void processData();
    protected abstract void writeData();
}

class CSVDataProcessor extends DataProcessor {
    @Override
    protected void readData() {
        System.out.println("Reading data from CSV file");
    }

    @Override
    protected void processData() {
        System.out.println("Processing CSV data");
    }

    @Override
    protected void writeData() {
        System.out.println("Writing data to CSV file");
    }
}
```

#### 依赖注入（Spring）
```java
@Component
public class UserService {
    private final UserRepository userRepository;

    @Autowired
    public UserService(UserRepository userRepository) {
        this.userRepository = userRepository;
    }

    public void saveUser(User user) {
        userRepository.save(user);
    }
}
```

#### 服务总线（Azure Service Bus）
```csharp
// Azure Service Bus 示例（C#）
string connectionString = "<your_connection_string>";
string queueName = "<your_queue_name>";

var client = new QueueClient(connectionString, queueName);

var message = new Message(Encoding.UTF8.GetBytes("Hello, World!"));
await client.SendAsync(message);

await client.CloseAsync();
```

这些示例展示了在不同开发层次中使用的具体技术名称和实现方式。


## 详细讲解后两个

### 依赖注入（Spring）

#### 概念
依赖注入（Dependency Injection, DI）是一种设计模式，用于实现对象之间的松耦合。通过依赖注入，类不再负责创建其依赖对象，而是通过外部注入的方式获取依赖对象。Spring框架广泛使用依赖注入来管理Bean的生命周期和依赖关系。

#### 代码示例
以下是一个简单的Spring依赖注入示例，展示了如何使用`@Autowired`注解将依赖注入到Spring Bean中：

```java
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Component;

// 定义一个Repository接口
interface UserRepository {
    void save(User user);
}

// 实现UserRepository接口
@Component
class UserRepositoryImpl implements UserRepository {
    @Override
    public void save(User user) {
        System.out.println("User saved: " + user.getName());
    }
}

// 定义一个User类
class User {
    private String name;

    public User(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }
}

// 定义一个Service类，使用依赖注入
@Component
public class UserService {
    private final UserRepository userRepository;

    @Autowired
    public UserService(UserRepository userRepository) {
        this.userRepository = userRepository;
    }

    public void saveUser(User user) {
        userRepository.save(user);
    }
}

// Spring Boot应用程序入口
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;
import org.springframework.context.annotation.Bean;

@SpringBootApplication
public class Application {

    public static void main(String[] args) {
        SpringApplication.run(Application.class, args);
    }

    @Bean
    CommandLineRunner run(UserService userService) {
        return args -> {
            User user = new User("John Doe");
            userService.saveUser(user);
        };
    }
}
```

在这个示例中：
- `UserRepository`接口定义了一个保存用户的方法。
- `UserRepositoryImpl`类实现了`UserRepository`接口，并使用`@Component`注解将其声明为Spring Bean。
- `UserService`类使用`@Autowired`注解将`UserRepository`注入到其构造函数中。
- `Application`类是Spring Boot应用程序的入口，通过`CommandLineRunner`接口在应用启动时执行代码。

### 服务总线（Azure Service Bus）

#### 概念
服务总线（Service Bus）是一种消息传递中间件，用于在分布式系统中实现松耦合的通信。Azure Service Bus是微软Azure平台提供的一种消息传递服务，支持队列和发布/订阅模式，适用于跨应用程序和服务之间的异步通信。

#### 代码示例
以下是一个简单的Azure Service Bus示例，展示了如何发送和接收消息：

```csharp
using System;
using System.Text;
using System.Threading.Tasks;
using Microsoft.Azure.ServiceBus;

class Program
{
    const string ServiceBusConnectionString = "<your_connection_string>";
    const string QueueName = "<your_queue_name>";
    static IQueueClient queueClient;

    static async Task Main(string[] args)
    {
        queueClient = new QueueClient(ServiceBusConnectionString, QueueName);

        // 发送消息
        await SendMessagesAsync();

        // 接收消息
        RegisterOnMessageHandlerAndReceiveMessages();

        Console.WriteLine("Press ENTER to exit.");
        Console.ReadLine();

        await queueClient.CloseAsync();
    }

    static async Task SendMessagesAsync()
    {
        try
        {
            string messageBody = "Hello, World!";
            var message = new Message(Encoding.UTF8.GetBytes(messageBody));
            Console.WriteLine($"Sending message: {messageBody}");
            await queueClient.SendAsync(message);
        }
        catch (Exception exception)
        {
            Console.WriteLine($"{DateTime.Now} :: Exception: {exception.Message}");
        }
    }

    static void RegisterOnMessageHandlerAndReceiveMessages()
    {
        var messageHandlerOptions = new MessageHandlerOptions(ExceptionReceivedHandler)
        {
            MaxConcurrentCalls = 1,
            AutoComplete = false
        };

        queueClient.RegisterMessageHandler(ProcessMessagesAsync, messageHandlerOptions);
    }

    static async Task ProcessMessagesAsync(Message message, CancellationToken token)
    {
        Console.WriteLine($"Received message: {Encoding.UTF8.GetString(message.Body)}");
        await queueClient.CompleteAsync(message.SystemProperties.LockToken);
    }

    static Task ExceptionReceivedHandler(ExceptionReceivedEventArgs exceptionReceivedEventArgs)
    {
        Console.WriteLine($"Message handler encountered an exception {exceptionReceivedEventArgs.Exception}.");
        return Task.CompletedTask;
    }
}
```

在这个示例中：
- `ServiceBusConnectionString`和`QueueName`是Azure Service Bus的连接字符串和队列名称。
- `queueClient`是用于与Service Bus队列交互的客户端。
- `SendMessagesAsync`方法用于发送消息到队列。
- `RegisterOnMessageHandlerAndReceiveMessages`方法注册了一个消息处理器，用于接收和处理消息。
- `ProcessMessagesAsync`方法处理接收到的消息，并将其标记为已完成。
- `ExceptionReceivedHandler`方法处理消息处理过程中发生的异常。

通过这些示例，可以看到依赖注入和服务总线在实际应用中的具体实现方式。

## python 后两者

当然可以，以下是Python版本的依赖注入和服务总线在实际应用中的具体实现方式。

### 依赖注入（Python）

在Python中，可以使用`dependency-injector`库来实现依赖注入。以下是一个简单的示例：

#### 安装依赖
```bash
pip install dependency-injector
```

#### 代码示例
```python
from dependency_injector import containers, providers

# 定义一个Repository接口
class UserRepository:
    def save(self, user):
        raise NotImplementedError

# 实现UserRepository接口
class UserRepositoryImpl(UserRepository):
    def save(self, user):
        print(f"User saved: {user.name}")

# 定义一个User类
class User:
    def __init__(self, name):
        self.name = name

# 定义一个Service类，使用依赖注入
class UserService:
    def __init__(self, user_repository: UserRepository):
        self.user_repository = user_repository

    def save_user(self, user: User):
        self.user_repository.save(user)

# 定义一个容器来管理依赖关系
class Container(containers.DeclarativeContainer):
    user_repository = providers.Singleton(UserRepositoryImpl)
    user_service = providers.Factory(UserService, user_repository=user_repository)

# 使用示例
if __name__ == "__main__":
    container = Container()
    user_service = container.user_service()

    user = User("John Doe")
    user_service.save_user(user)
```

在这个示例中：
- `UserRepository`是一个接口，`UserRepositoryImpl`是其实现。
- `UserService`类通过构造函数注入`UserRepository`。
- `Container`类使用`dependency-injector`库来管理依赖关系。

### 服务总线（Azure Service Bus）

在Python中，可以使用`azure-servicebus`库来与Azure Service Bus进行交互。以下是一个简单的示例：

#### 安装依赖
```bash
pip install azure-servicebus
```

#### 代码示例
```python
import os
from azure.servicebus import ServiceBusClient, ServiceBusMessage

CONNECTION_STR = "<your_connection_string>"
QUEUE_NAME = "<your_queue_name>"

def send_message(sender):
    message = ServiceBusMessage("Hello, World!")
    sender.send_messages(message)
    print("Sent a single message")

def receive_message(receiver):
    with receiver:
        for msg in receiver:
            print("Received: " + str(msg))
            receiver.complete_message(msg)

if __name__ == "__main__":
    servicebus_client = ServiceBusClient.from_connection_string(conn_str=CONNECTION_STR, logging_enable=True)

    with servicebus_client:
        sender = servicebus_client.get_queue_sender(queue_name=QUEUE_NAME)
        send_message(sender)

        receiver = servicebus_client.get_queue_receiver(queue_name=QUEUE_NAME, max_wait_time=5)
        receive_message(receiver)
```

在这个示例中：
- `CONNECTION_STR`和`QUEUE_NAME`是Azure Service Bus的连接字符串和队列名称。
- `send_message`函数用于发送消息到队列。
- `receive_message`函数用于接收和处理消息。

通过这些示例，可以看到依赖注入和服务总线在Python中的具体实现方式。

## 面向接口编程，依赖倒置原则，依赖注入，三者区别联系

面向接口编程、依赖倒置原则和依赖注入是软件设计中三个重要的概念。它们之间存在一定的联系，但也有各自的侧重点。以下是它们的区别和联系：

### 1. 面向接口编程

**定义**：面向接口编程是指在设计和实现系统时，优先考虑接口而非具体实现。它强调通过接口来定义对象的行为，允许不同的实现类遵循同一接口。

**特点**：
- 通过接口解耦实现和使用者，提高代码的可扩展性和维护性。
- 使得替换实现变得简单，可以在不修改客户端代码的情况下，替换不同的实现类。

**示例**：
```python
class ServiceInterface:
    def execute(self):
        pass

class ConcreteService(ServiceInterface):
    def execute(self):
        print("Executing service.")

def client_code(service: ServiceInterface):
    service.execute()

client_code(ConcreteService())
```

### 2. 依赖倒置原则 (DIP)

**定义**：依赖倒置原则是 SOLID 原则之一，要求高层模块不应依赖于低层模块，而是应依赖于抽象（接口）。同时，抽象不应依赖于细节，细节应依赖于抽象。

**特点**：
- 通过依赖抽象（接口），而不是具体实现，减少耦合。
- 使得高层模块和低层模块可以独立变化，提高系统的灵活性。

**示例**：
```python
# 高层模块
class HighLevelModule:
    def __init__(self, service: ServiceInterface):
        self.service = service

    def perform_action(self):
        self.service.execute()

# 低层模块
class LowLevelService(ServiceInterface):
    def execute(self):
        print("Low level service executed.")

high_level = HighLevelModule(LowLevelService())
high_level.perform_action()
```

### 3. 依赖注入 (DI)

**定义**：依赖注入是一种实现依赖倒置原则的技术，主要用于将依赖关系（例如服务或组件）传递给一个类，而不是在类内部创建这些依赖。这使得类不需要知道其依赖的具体实现。

**特点**：
- 提高了模块的可测试性和可维护性，因为可以轻松地替换依赖项。
- 可以通过构造函数注入、属性注入或方法注入等方式实现。

**示例**：
```python
class Client:
    def __init__(self, service: ServiceInterface):
        self.service = service

    def do_something(self):
        self.service.execute()

# 依赖注入
service = ConcreteService()
client = Client(service)
client.do_something()
```

### 联系

1. **相互支持**：面向接口编程为依赖倒置原则提供了基础，因为接口的存在使得高层模块可以依赖于抽象而非具体实现。而依赖注入则是实现依赖倒置原则的一种方法。
   
2. **提高灵活性和可测试性**：三者都旨在提高系统的灵活性、可维护性和可测试性。通过面向接口编程和依赖倒置原则，可以更容易地进行单元测试，因为可以注入模拟对象。

3. **设计理念**：它们都强调解耦，而不是直接依赖具体实现，鼓励使用抽象以降低模块间的耦合度。

### 总结

- **面向接口编程**：关注于通过接口定义行为，增加灵活性。
- **依赖倒置原则**：强调高层模块应依赖于抽象，而非具体实现。
- **依赖注入**：是实现依赖倒置原则的一种具体方法，通过外部提供依赖来解耦类之间的关系。


## Python中的依赖注入框架有哪些？


在Python中，有几个流行的依赖注入框架可以帮助实现依赖注入。以下是一些常用的依赖注入框架：

1. **Dependency Injector**：
   - **简介**：一个功能强大且灵活的依赖注入框架，支持构造函数注入、属性注入和方法注入。
   - **特点**：支持配置、模块化、单例、多例等多种模式。
   - **官网**：[Dependency Injector](https://python-dependency-injector.ets-labs.org/)

2. **injector**：
   - **简介**：一个轻量级的依赖注入框架，灵感来自于Java的Guice。
   - **特点**：简单易用，支持构造函数注入和方法注入。
   - **官网**：[injector](https://injector.readthedocs.io/)

3. **python-inject**：
   - **简介**：一个简单的依赖注入框架，支持全局注入和局部注入。
   - **特点**：轻量级，易于集成。
   - **官网**：[python-inject](https://github.com/ivankorobkov/python-inject)

4. **Pony DI**：
   - **简介**：一个轻量级的依赖注入框架，支持构造函数注入和属性注入。
   - **特点**：简单易用，适合小型项目。
   - **官网**：[Pony DI](https://github.com/ponyorm/pony-di)

### 示例代码

#### Dependency Injector 示例
```python
from dependency_injector import containers, providers

class UserRepository:
    def save(self, user):
        print(f"User saved: {user.name}")

class UserService:
    def __init__(self, user_repository: UserRepository):
        self.user_repository = user_repository

    def save_user(self, user):
        self.user_repository.save(user)

class User:
    def __init__(self, name):
        self.name = name

class Container(containers.DeclarativeContainer):
    user_repository = providers.Singleton(UserRepository)
    user_service = providers.Factory(UserService, user_repository=user_repository)

if __name__ == "__main__":
    container = Container()
    user_service = container.user_service()

    user = User("John Doe")
    user_service.save_user(user)
```

#### injector 示例
```python
from injector import Injector, inject, singleton

class UserRepository:
    def save(self, user):
        print(f"User saved: {user.name}")

@singleton
class UserService:
    @inject
    def __init__(self, user_repository: UserRepository):
        self.user_repository = user_repository

    def save_user(self, user):
        self.user_repository.save(user)

class User:
    def __init__(self, name):
        self.name = name

if __name__ == "__main__":
    injector = Injector()
    user_service = injector.get

(User

Service)

    user = User("John Doe")
    user_service.save_user(user)
```

这些示例展示了如何使用不同的依赖注入框架来管理依赖关系。选择合适的框架取决于项目的具体需求和复杂度。

## Python中的服务定位器模式是什么？

服务定位器模式（Service Locator Pattern）是一种设计模式，用于在运行时动态查找和获取服务实例。它提供了一种集中管理服务实例的方式，避免了直接依赖具体的服务实现，从而实现了松耦合。

### 服务定位器模式的实现
服务定位器模式通常包括以下几个部分：
1. **服务接口**：定义服务的接口。
2. **服务实现**：实现服务接口的具体类。
3. **服务定位器**：负责注册和查找服务实例的类。

### 示例代码
以下是一个简单的Python示例，展示了如何实现服务定位器模式：

```python
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
    user =

 User

("John Doe")
    user_repository.save(user)
```

在这个示例中：
- [`UserRepository`](command:_github.copilot.openSymbolFromReferences?%5B%22%22%2C%5B%7B%22uri%22%3A%7B%22scheme%22%3A%22file%22%2C%22authority%22%3A%22%22%2C%22path%22%3A%22%2FF%3A%2FEdata%2Fprogram_language%2Fgit_ln%2Fdesign-patterns-cpp%2Fzyt%E9%87%8D%E6%9E%84.md%22%2C%22query%22%3A%22%22%2C%22fragment%22%3A%22%22%7D%2C%22pos%22%3A%7B%22line%22%3A1478%2C%22character%22%3A40%7D%7D%5D%2C%224efb734b-6f55-40de-8a39-853a2e7feddf%22%5D "Go to definition")是一个服务接口，`UserRepositoryImpl`是其实现。
- `ServiceLocator`类负责注册和查找服务实例。
- 在`main`函数中，首先注册服务实例，然后通过服务定位器获取服务实例并使用它。

### 服务定位器模式的优缺点
#### 优点：
- **松耦合**：客户端代码不需要直接依赖具体的服务实现，只需依赖服务接口。
- **集中管理**：服务实例的创建和管理集中在服务定位器中，便于维护和修改。

#### 缺点：
- **隐藏依赖**：服务定位器模式可能会隐藏类的依赖关系，使代码难以理解和维护。
- **全局状态**：服务定位器通常使用全局状态来存储服务实例，这可能导致难以测试和调试。

服务定位器模式在某些情况下非常有用，但在使用时需要权衡其优缺点，并根据具体需求选择合适的设计模式。


## 控制反转、依赖注入、依赖倒置原则三者区别

控制反转（Inversion of Control）、依赖注入（Dependency Injection）和依赖倒置原则（Dependency Inversion Principle）是软件设计中的重要概念，虽然它们相互关联，但各自有不同的重点和应用。以下是它们的区别：

### 1. 控制反转 (IoC)

**定义**：控制反转是一种设计原则，指的是将对象的控制权从程序代码转移到框架或容器。这意味着对象不再直接创建其依赖，而是由外部系统负责管理这些依赖。

**特点**：
- 通过将对象的生命周期管理交给外部容器（如 Spring），实现解耦。
- 使得应用程序的结构更加灵活，有助于增强可测试性。

**示例**：
在一个使用 IoC 的框架中，通常配置好依赖关系，然后框架在运行时自动实例化和注入依赖对象。

### 2. 依赖注入 (DI)

**定义**：依赖注入是实现控制反转的一种具体技术，通过将依赖关系（对象或服务）传递给一个类，而不是在类内部创建这些依赖，从而降低耦合度。

**特点**：
- 可以通过构造函数、属性或方法等多种方式注入依赖。
- 有助于提高代码的可测试性和可维护性，因为可以轻松替换依赖项。

**示例**：
```python
class Service:
    def execute(self):
        print("Service executed.")

class Client:
    def __init__(self, service: Service):
        self.service = service

# 依赖注入
service_instance = Service()
client_instance = Client(service_instance)
```

### 3. 依赖倒置原则 (DIP)

**定义**：依赖倒置原则是 SOLID 原则之一，强调高层模块应依赖于抽象（接口），而非具体实现，同时抽象不应依赖于细节，细节应依赖于抽象。

**特点**：
- 通过依赖抽象而不是具体类，从根本上减少模块间的耦合。
- 使得高层和低层模块可以独立变化，增强系统的灵活性和可扩展性。

**示例**：
```python
class ServiceInterface:
    def execute(self):
        pass

class LowLevelService(ServiceInterface):
    def execute(self):
        print("Low level service executed.")

class HighLevelModule:
    def __init__(self, service: ServiceInterface):
        self.service = service

# 使用依赖倒置原则
service_instance = LowLevelService()
high_level_instance = HighLevelModule(service_instance)
```

### 总结

- **控制反转（IoC）**：是一种设计思想，涉及将对象的控制权交给外部容器或框架。
- **依赖注入（DI）**：是控制反转的一种具体实现方式，通过外部提供依赖来解耦类之间的关系。
- **依赖倒置原则（DIP）**：是设计原则，强调高层模块应依赖于抽象而非具体实现，以降低耦合度。

这三者共同促进了软件系统的灵活性、可维护性和可测试性，但它们的关注点和实现方式有所不同。


IoC 是 "Inversion of Control" 的缩写，翻译为“控制反转”。这是一个软件设计原则，用于增强程序的灵活性和可维护性。

## 结构化VS. 面向对象

结构化编程和面向对象编程是两种不同的编程范式，各自有其特点与适用场景。以下是这两者的比较：

### 结构化编程 (Structured Programming)

#### 特点：
- **重视过程**：结构化编程强调过程和函数，通过将程序分解为小的、可管理的模块（函数）来实现。
- **控制结构**：使用条件语句（如 if、switch）、循环（如 for、while）等控制结构来控制程序的执行流程。
- **数据和功能分离**：数据处理与数据本身相对独立，数据通常以结构体或数组等形式存在。
- **可读性和维护性**：通过模块化来提高代码的可读性和可维护性。

#### 优点：
- 逻辑清晰，容易理解。
- 适合较小规模的项目。
- 易于调试和测试。

#### 缺点：
- 难以应对复杂系统：随着系统的增大，代码的管理和组织变得困难。
- 不够灵活：难以重用代码和扩展。

### 面向对象编程 (Object-Oriented Programming, OOP)

#### 特点：
- **重视对象**：OOP 将数据和操作这些数据的函数封装在一起，形成对象。
- **封装**：通过封装隐藏对象内部的实现细节，只暴露必要的接口。
- **继承**：允许创建新类（子类）以复用、扩展或修改现有类（父类）的行为。
- **多态**：允许不同对象以相同的方式响应相同的消息，提高了程序的灵活性。

#### 优点：
- 适合大型、复杂系统的开发。
- 代码复用性高：通过继承和组合，可以重用已有的类。
- 易于扩展和维护：新功能可以通过添加新类而不是修改现有代码实现。

#### 缺点：
- 学习曲线陡峭：对于初学者来说，理解OOP的概念可能比较困难。
- 可能引入额外的复杂性：在一些简单的场景中，OOP 可能显得过于复杂。

### 总结

- **适用场景**：
  - 结构化编程更适合较小的、简单的程序，强调整体的顺序和逻辑。
  - 面向对象编程则更适合复杂的应用程序，强调重用和模块化。

- **实现思想**：
  - 结构化编程关注的是“做什么”，即过程。
  - 面向对象编程关注的是“是什么”，即对象及其交互。

选择哪种编程范式通常取决于项目的需求、规模以及团队的熟悉程度。在实际开发中，很多语言和项目会结合这两种方法的优点。


## ASCII、Unicode和UTF-8编码

https://www.bilibili.com/video/BV14Ns8eEERu/?spm_id_from=333.1007.tianma.1-1-1.click&vd_source=15af266292056c5d92fb6aa45ac9c1d0

**字素** 可以包括两 **代码点**
字素 才是最小单位
![alt text](zFigures/zyt重构/image.png)

python 使用的是 代码点
![alt text](zFigures/zyt重构/image-1.png)
![alt text](zFigures/zyt重构/image-2.png)