/*******************************************
 *  Author : Iosif Atzamis
 *  Email : csd3094@csd.uoc.gr
 *  File ReadMe.txt
 * 
 * ******************************************/

 Allages eginan sta ekshs arxeia  : 
 
 linux-2.6.38.1/kernel/sched.c 
    (line 4163-4178) 
    Se autes tis grammes elegxw an o remaining time einai megaluteros apo 0 gia 
    na ektelestei h diergasia .Olos auto ginetai prin to context switch mesa sthn schedule

 linux-2.6.38.1/include/linux/init_task.h 
 (line 133 - 134)
    Se autes tis grammes arxikopoiw tis metavlhtes gia  remaining_time demand_time kai 8etw 
    to active ths ths diergasias pou dimiourghthike

 linux-2.6.38.1/kernel/sched_fair.c 	
 (line 1170 - 1224) 
    Implementation tou least_demand_first 
        Ksekinaw apo ton leftmost node tou red-black cfs processes tree kai kanw 
        traverse olous tous komvous se xrono O(n) psaxnontas kathe fora thn diergrasia 
        me to mikrotero remaining demand time kai koitaw tautoxrona auth h diergasia
        na einai active wste na mporei na ektelestei se periptwsh epiloghs ths.

        Ean kamia apo tis diergasies tou red-black tree den epituxoun stous parapanw
        periorismous tote thetei apo monh ths h default leitourgia ths sunartisis opws 
        tha htan prin ton kwdika gia least_demand_first

 linux-2.6.38.1/kernel/set_demand.c
    Arxikopoiw me to demand ta demand_time kai remaining_time wste sthn sunexeia me thn 
    afairesh tou na gnwrizw to remaining_time pou menei gia to ka8e deuterolepto kai 
    parallhla na krataw to arxiko demand_time.
    Episis orizw ws active 

linux-2.6.38.1/include/linux/d_params.h
    Evala tis ekshs metavlhtes demand_time , remaining_time , active

   -- Genika sumperasmata --
Ta test files pou dhmiourghsa eixan megalh diafora ston xrono ka8ws to ena zhtouse
demand =10 kai to deutero demand =50 etsi ka8ws ta etrexa eite to test1 prwto eite to 
test2 prwto kai sthn sunexeia to allo to apotelesma pou epairna htan to epi8umito
dld prwta na teleiwnei to testfile me to mikrotero demand time kai sthn sunexeia to allo
H entolh pou etrexa kai ta 2 tautoxrona einai :
./testfile1& ./testfile2
