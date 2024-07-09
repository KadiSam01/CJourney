from flask import Flask, request

app = Flask(__name__)

@app.route('/api/greet', methods=['POST'])
def greet():
    name = request.json.get('name')
    if name:
        return {'message': f'Hello, {name}!'}
    else:
        return {'error': 'Name is required'}, 400

if __name__ == '__main__':
    app.run()