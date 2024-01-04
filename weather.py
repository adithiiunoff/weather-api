import requests

city  = input("Enter the city name: ")

params = {
  'access_key': 'f217f08feac033d6703cd53cce82396f',
  'query': city
}

api_result = requests.get('http://api.weatherstack.com/current', params)

api_response = api_result.json()

print(u'Current temperature in %s is %d℃' % (api_response['location']['name'], api_response['current']['temperature']))
# print(api_response)