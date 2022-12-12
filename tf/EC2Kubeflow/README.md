### How to Start?
1. SSH into the instance.
    ```
    ssh -i mykey ubuntu@ip
    ```
2. Wait until all resources are active. 
    ```
    nice -n 16 watch -n 1 -c juju status --relations --color
    ```
3. Create proxy. 
    ```
    ssh -i mykey -D 9999 ubuntu@ip
    # go to firefox Settings -> proxy (Connection Settings)
    - Manual proxy configuration
    - SOCKS Host: 127.0.0.1:9999
    - SOCKS v5
    # Firefox Browser, then enter username and password
    http://10.64.140.43.nip.io
    ```