### Steps
1. Build docker container. 
    ```
    docker build -t fastapi-trial -f src/Dockerfile .
    docker run -dp 8088:8080 fastapi-trial
    ```
2. Build infrastructure. 