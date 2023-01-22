```
docker-compose -f docker-compose.yml up -d
~/miniconda/bin/python consumer.py
~/miniconda/bin/python producer.py
docker-compose -f docker-compose.yml down 
```

### References
1. https://towardsdatascience.com/kafka-docker-python-408baf0e1088