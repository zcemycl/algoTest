### How it works?
1. Edit `/etc/ssh/sshd_config`
2. Generate ssh key `ssh-keygen -t rsa -b 4096`
3. Turn on/off (start/stop) instance. 
    ```
    curl --location --request GET 'https://cqctvuuq50.execute-api.eu-west-2.amazonaws.com/v1/predict?instanceId=i-09b73333929b66fb2&action=stop' \
    --header 'x-api-key: 9KRYS3X05G1SbL60zatCB8o1M9RvgGyoTQ4gaUda'
    ```

4. Get ip address via describe action.
5. SSH into instance. 
    ```
    ssh -i mykey ubuntu@{ip}
    ```