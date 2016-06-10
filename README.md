### terrainformatica sciter::value (formerly known as json::value)

Supported the following [sciter::value](http://terrainformatica.com/forums/topic.php?id=670) types:

* undefined
* null
* bool
* int
* double
* currency, date - displayed just as int
* string (including #symbols)
* bytes (as byte array)
* array
* map — requires `json_value_pair` type embedded in binary


Not supported (yet):

* length (int or float union?)
* function
* object
* dom_object


Note: `map` visualizer requires the following type knowledge:

```cpp
typedef std::pair<sciter::value, sciter::value> json_value_pair;

extern json_value_pair __visualize_json_value_pair = {};
```

Last line to ensure that compiler will not remove it from binary.

Screenshot:

![Debug screenshot](sciter-value.png)
