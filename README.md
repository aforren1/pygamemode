cd gamemode

meson setup build -Dwith-examples=false -Dwith-daemon=false -Dwith-util=false --buildtype debugoptimized -Dwith-systemd-user-unit-dir=/etc/systemd/user "$@"

cd build && ninja


```python
import ctypes

lib = ctypes.CDLL('libgamemodeauto.so')
lib.gamemode_request_start.argtypes = None
lib.gamemode_request_start.restype = ctypes.c_int

```
