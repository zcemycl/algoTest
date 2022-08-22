import argparse
import numpy as np
import pandas as pd
from flask import Flask, request, send_file

app = Flask(__name__)

@app.route("/")
def home():
    return {"message", "Hello Flask!"}

@app.route("/summary", methods=["GET"])
def summary():
    return None

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument('--host', type=str, default="0.0.0.0")
    p.add_argument('--port', type=str, default=5000)
    p.add_argument('--dev', type=bool, default=True)
    args = p.parse_args()
    app.run(host=args.host, port=args.port, debug=args.dev)