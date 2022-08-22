import argparse
import numpy as np
import pandas as pd
from flask import Flask, request, send_file, jsonify, render_template

app = Flask(__name__)

@app.route("/")
def home():
    return "<h4>Hello Flask! Bye Flask!</h4>"

@app.route("/summary", methods=["GET"])
def summary():
    return jsonify({"message": "Hello Flask!"})

if __name__ == "__main__":
    p = argparse.ArgumentParser()
    p.add_argument('--host', type=str, default="0.0.0.0")
    p.add_argument('--port', type=str, default=5000)
    p.add_argument('--dev', type=bool, default=True)
    args = p.parse_args()
    app.run(host=args.host, port=args.port, debug=args.dev)