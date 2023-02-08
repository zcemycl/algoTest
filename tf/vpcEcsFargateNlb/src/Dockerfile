FROM ubuntu:latest

RUN set -xe \
    && apt-get update -y \
    && apt-get install python3-pip -y
RUN pip install --upgrade pip
RUN pip3 install uvicorn fastapi urllib3
RUN apt-get install wget -y
RUN wget https://raw.githubusercontent.com/zcemycl/algoTest/main/tf/vpcec2/src/main.py
EXPOSE 8080
ENTRYPOINT [ "python3" ]
CMD [ "main.py" ]
