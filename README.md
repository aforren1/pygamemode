[![Build Status](https://travis-ci.org/aforren1/pygamemode.svg?branch=master)](https://travis-ci.org/aforren1/pygamemode)

A Python wrapper for the GameMode client API (https://github.com/FeralInteractive/gamemode).

To use this effectively, you'll need to install GameMode on your system. See either your system's package manager or the build instructions [here](https://github.com/FeralInteractive/gamemode/blob/master/README.md#development-).

Example usage:

```python
import gamemode as gm

if gm.request_start():
    msg = gm.error_string()
    raise ValueError('Failed to request gamemode start: {}...'.format(msg))

# ...do things here...

if gm.request_end():
    msg = gm.error_string()
    raise ValueError('Failed to request gamemode end: {}...'.format(msg))
```

See [test.py](https://github.com/aforren1/pygamemode/blob/master/test.py) for all available calls.
