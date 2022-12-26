1. Start building. 
    ```
    ssh-keygen # name: mykey
    aws-vault exec {} --no-session -- terraform apply -auto-approve
    ```
2. Visit website https://insights.stackoverflow.com/survey and download csv of either year.
3. Copy script to your master node. 
4. Run the script by, 
    ```
    spark-submit main.py
    ```