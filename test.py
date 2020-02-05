import os
import gamemode as gm

pid = os.getpid()

print(gm.request_start())
print(gm.query_status())
print(gm.request_end())

print(gm.request_start_for(pid))
print(gm.query_status_for(pid))
print(gm.request_end_for(pid))

