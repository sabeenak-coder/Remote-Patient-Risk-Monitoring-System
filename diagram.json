{
  "version": 1,
  "author": "Sabeena",
  "editor": "wokwi",
  "parts": [
    { "type": "board-esp32-devkit-c-v4", "id": "esp", "top": 0, "left": 158.44, "attrs": {} },
    {
      "type": "board-ssd1306",
      "id": "oled1",
      "top": 137.54,
      "left": -105.37,
      "attrs": { "i2cAddress": "0x3c" }
    },
    {
      "type": "wokwi-buzzer",
      "id": "bz1",
      "top": -132,
      "left": 270.6,
      "attrs": { "volume": "0.1" }
    },
    { "type": "wokwi-potentiometer", "id": "pot1", "top": -145.3, "left": 19, "attrs": {} },
    { "type": "wokwi-potentiometer", "id": "pot2", "top": -145.3, "left": -105.8, "attrs": {} },
    {
      "type": "wokwi-pushbutton",
      "id": "btn1",
      "top": 57.5,
      "left": -313.3,
      "rotate": 90,
      "attrs": { "color": "green", "xray": "1" }
    }
  ],
  "connections": [
    [ "esp:TX", "$serialMonitor:RX", "", [] ],
    [ "esp:RX", "$serialMonitor:TX", "", [] ],
    [ "oled1:GND", "esp:GND.1", "magenta", [ "v-19.2", "h76.8", "v134.4" ] ],
    [ "btn1:1.l", "esp:GND.1", "green", [ "v-57.6", "h422.4", "v163.2" ] ],
    [ "btn1:1.r", "esp:15", "green", [ "v125", "h556.8", "v-67.2" ] ],
    [ "pot2:GND", "esp:GND.2", "black", [ "v57.6", "h336" ] ],
    [ "pot2:SIG", "esp:34", "green", [ "v0" ] ],
    [ "pot2:VCC", "esp:3V3", "red", [ "v134.4", "h200.8", "v-28.8" ] ],
    [ "pot1:VCC", "esp:3V3", "red", [ "v96", "h95.05" ] ],
    [ "pot1:GND", "esp:GND.2", "black", [ "v48", "h220.8", "v57.6" ] ],
    [ "pot1:SIG", "esp:35", "green", [ "v0" ] ],
    [ "bz1:2", "esp:23", "red", [ "v0" ] ],
    [ "bz1:1", "esp:GND.1", "cyan", [ "v278.4", "h-153.6", "v-76.8" ] ],
    [ "oled1:VCC", "esp:3V3", "red", [ "v0" ] ],
    [ "oled1:SCL", "esp:22", "green", [ "v-182.4", "h326.7", "v86.4" ] ],
    [ "oled1:SDA", "esp:21", "green", [ "h67.27", "v76.8", "h249.6", "v-144" ] ]
  ],
  "dependencies": {}
}
