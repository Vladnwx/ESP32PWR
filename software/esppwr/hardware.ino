/* Система строится на устройствах, именуемых Device
 * 
 * Device организует класс, со свойствами ID, тип ....
 * 
 * ID представлено целым числом
 * 
 * "Тип" определяет тип устройства: датчик, дисплей.....
 *   
 */
enum Device_type{sensor, lcd};

class Device {
  protected:
  unsigned int counter=0;
  
  
  public:
  
  Device (); //конструктор 
  virtual ~Device (); //Деструктор

  void addDevice (const Device& Device_type, unsigned int id = 0);
unsigned int numberOfDevice() const; 
unsigned int numberOfDevice(Device_type); 
Device& device(Device_type, unsigned int id = 0);
  


};

/* Класс датчиков является наследником класса Device
 *   Датчик имеет тип: Кнопка, Термометр, Люксометр 
 *   
 *   Датчик имеет шину (или интерфейс) подключения : Номер GPIO, I2C, SPI, oneWire....
 *   
 *  Шина определяет количество занимаемых GPIO, добавлена проверка если GPIO более 2.
 *  Если количиство пинов равно 1, то выводить список доступных пинов, иначе выводить список шин SDA, I2C
 *  
 *  Нужно откуда-то брать GPIO, получать их количество, помечать как занятые, помечать как шину,
 *  добавить условия для возможности выбора конкретных GPIO под шины I2C, SPI, oneWire
 *  
 *  Шина I2C и SPI обычно заданы на определенных пинах. Нужно добавить возможность выбирать эти пины,
 *  а так же задать их по умолчанию для устройств. Удалять пины из доступных.
 *  Шина I2C и SPI имеют свои адреса, нужно реализовать их добавление.
 *  
 *  Нужно реализовать поиск устройств по шине I2C
 *  
 *  Нужно реализовать поиск устройств по шине onewire
 */
enum Sensor_type {switches, thermometer, luxometer, volumelevel, };
enum Sensor_bus {gpio, oneWire, i2c, spi};

 class Sensor : public Device {
  public:

Sensor(Sensor_type, Sensor_bus, unsigned int id = 0);
virtual ~Sensor();

  
  bool onepin = true; // Переменная для проверки занимает ли датчик один пин
  void Onepin ()
  {
//  if ((bus != "GPIO") || (bus != "oneWire") onepin = false; //Если датчик это не GPIO или oneWire, то датчик использует шину или занимает более одного пина  
  //Что-то тут не так
  }
 };

 /* Класс кнопки является наследником класса Sensor
 *   пока что не релизован
 */
class Switches : public Sensor {

public:
Switches(unsigned int id = 0); //конструктор кнопки с нумерацией
virtual ~Switches(); //деструктор
bool state; //состояние кнопки
  
};

 /* Класс термометры является наследником класса Sensor
 *   
 *   Термометры имеет тип: только измерение температуры, измерение температуры + влажность, 
 *   температура + влажность + барометрическое давление
 *   
 *   Термометр должен автоматически измерять заданные параметры.
 *   
 *   Термометр должен учитывать место установки: помещение или улица.
 *   Для уличного датчика периоод измерения параметров не менее 5 минут.
 *   Для датчика в помещении не менее 10 секунд
 *   
 *   
 *   Термометр должен учитывать возможность вывода точки росы, относительное изменение температуры, 
 *   относительное изменение барометрического давления, 
 *   максимум и минимум температуры за день, месяц, год, за весь период работы
 *   
 *   Система должна позволять пользователю проводить калибровку датчиков по известным опорным значениям
 *   
 *   Добавить возможность выбора популярных термометров (DS18B20, BME280...)
 *   с автовыбором шины и измеряемых параметров
 *   
 */
enum stdThermometer {DS18B20, BME280, Custom}; //Перечисления стандартных типов латчиковдатчиков
 
class Thermometer : public Sensor {

public: 

Thermometer(stdThermometer, unsigned int id = 0);
virtual ~Thermometer(); // деструктор
float currentTenperature();
float currentPressure();
float currentHumyduty();

void addThermometer ()
{
  
}
 
  
};

