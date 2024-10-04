from abc import ABC, abstractmethod

# 定义抽象基类
class DataProcessor(ABC):
    # 模板方法，定义了算法的骨架
    def process(self):
        self.read_data()
        self.process_data()
        self.write_data()

    @abstractmethod
    def read_data(self):
        pass

    @abstractmethod
    def process_data(self):
        pass

    @abstractmethod
    def write_data(self):
        pass

# 具体实现类A
class CSVDataProcessor(DataProcessor):
    def read_data(self):
        print("Reading data from CSV file")

    def process_data(self):
        print("Processing CSV data")

    def write_data(self):
        print("Writing data to CSV file")

# 具体实现类B
class XMLDataProcessor(DataProcessor):
    def read_data(self):
        print("Reading data from XML file")

    def process_data(self):
        print("Processing XML data")

    def write_data(self):
        print("Writing data to XML file")

# 使用示例
if __name__ == "__main__":
    csv_processor = CSVDataProcessor()
    csv_processor.process()

    xml_processor = XMLDataProcessor()
    xml_processor.process() 
