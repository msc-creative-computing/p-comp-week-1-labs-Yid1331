# Fat Simulator

## 01 Design Inspiration
My height is 67.2 inches, and my weight is 121 pounds. I shouldn't be called fat from any angle. But if you knew my weight a year ago, you will be shocked at what happened to me this year. A year ago, I was only 108 pounds！I gained 13 pounds in just one year. Actually, all of this didn’t happen suddenly. I didn’t care about it at first. After all, I’ve been a thin man for more than 20 years. Until one day, when I was climbing stairs, I felt very strenuous. When I got home to measure my weight, I found that I had reached 121 pounds! My thighs are amazingly thick! The lower abdomen and arms are also full of fat. Looking at my body gradually getting out of shape, I can't imagine what it would be like to become a big fat man!
I fully understand the reason for today's result. Due to academic pressure and regular part-time work, I almost sit at my desk for a long time without exercising. Coupled with eating junk food and drinking sweet drinks, it eventually led to this terrible result. I often remind myself that exercise is 
 an essential factor in maintaining health, but I often refuse exercise for various reasons. 
I interviewed friends around me who can be called obese. They said that obesity seriously disturbs their mobility. Compared with ordinary people, they are equivalent to walking forward with weight. These words aroused my curiosity, which made me wonder: What does it feel like to be a fat man? And how can we avoid becoming fat people?
Why don't I make a fat simulator! To remind those who do not usually pay attention to exercise to strengthen physical activity.

## 02 Design Mind
![image](https://user-images.githubusercontent.com/81423727/141125956-2b25e08e-7cfd-4e13-8901-3b9d3bab9ff1.png)
First of all, I will block my mobility in some way and bring myself closer to the feeling of obesity. Inflatable clothing is one of the items that I want to consider. They are cute and interesting and can reach my purpose. The principle of inflatable clothing is to use a constantly operating air extractor to draw outside air into the inflatable dress. It needs a continuous operation to ensure that the inflatable clothing is always in an inflated state. 
![image](https://user-images.githubusercontent.com/81423727/141126025-a023b4ff-c613-4c18-9a06-a3c41f0d2719.png)
![image](https://user-images.githubusercontent.com/81423727/141126046-0a197df6-f184-4450-a38b-c6e5afd0dd4d.png)
And when I become fat, how can I solve the problem of obesity? Let the inflatable suit no longer expand and control the operation of the air extractor, which is Arduino's function. The heart rate that a person changes during exercise will trigger the operating frequency of the pump.
![image](https://user-images.githubusercontent.com/81423727/141126094-c55bb302-65e8-4e7b-8270-2a042249f0f5.png)
![image](https://user-images.githubusercontent.com/81423727/141126101-f73298e3-60ff-4ee4-83f0-b40a060a44f6.png)
Not only that, I hope that when I get fat or thin, there will be a voice reminding me or inspiring me, then I will need a speaker to achieve such a function. I am also considering using a screen for output. I hope that the conditions that trigger all of this are progressive. For example, when I am slightly fat, it is one kind of reminder, and when I am severely obese, it is another reminder. A thin-film pressure sensor may be a good choice. The pressure sensor is connected to the inflatable suit. When the inflatable suit is gradually inflated, the pressure sensor gets progressive pressure, triggering different prompts. 
![image](https://user-images.githubusercontent.com/81423727/141126141-58499da2-9ef3-4691-9e70-de3543459a7b.png)
![image](https://user-images.githubusercontent.com/81423727/141126155-aed926fb-e6a8-49b9-83f2-2a3518b52b0c.png)
Below is a very scribbled schematic.
![image](https://user-images.githubusercontent.com/81423727/141126186-73c1f2ca-a032-40fd-9ef6-450730325ed7.png)

## 03 Possible Components
1.Inflatable suit and its matching air extractor; (I speculate that more air extractors may be needed.)
2.Arduino Uno (maybe need other development boards);
3.Heart rate sensor;
4.Thin film pressure sensor;
5.Speaker;
6.Screen;
7.3D printed shell;
8.Other parts and tools.
