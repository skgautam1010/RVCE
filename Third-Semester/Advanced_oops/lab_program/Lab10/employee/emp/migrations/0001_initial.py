# Generated by Django 3.1.2 on 2021-01-10 20:00

from django.db import migrations, models


class Migration(migrations.Migration):

    initial = True

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='Employee',
            fields=[
                ('id', models.AutoField(auto_created=True, primary_key=True, serialize=False, verbose_name='ID')),
                ('empid', models.CharField(max_length=150)),
                ('empname', models.CharField(max_length=100)),
                ('empadd', models.CharField(max_length=100)),
            ],
        ),
    ]