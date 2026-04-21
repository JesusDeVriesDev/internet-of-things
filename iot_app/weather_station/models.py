from django.db import models

# Create your models here.
class SensorData(models.Model):
    name = models.CharField(max_length=50)
    timestamp = models.DateTimeField(auto_now_add=True)
    temperature = models.FloatField(default=0.0)
    humidity = models.FloatField()
    pressure = models.FloatField()

    def __str__(self):
        return f"SensorData '{self.name}' at {self.timestamp}: Temp={self.temperature}, Humidity={self.humidity}, Pressure={self.pressure}"