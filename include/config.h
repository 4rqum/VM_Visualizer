#ifndef CONFIG_H
#define CONFIG_H

/*
 * This file will hold the configuration of our Virtual Memory
 * This means we'll have all the attributes listed here such as:
 *   - Size of Virtual Memory
 *   - Size of Physical Memory
 *   - Page Size
 *   - TLB Entries
 * 
 * We'll keep the information in here to a minimum to simulate a real EECS 370 problem where you the USER are in charge of finding all the information given just the sizes given here.
 * We'll hardcode these sizes for now, just so that I know my simulator works before you the USER can decide the sizes for yourself
*/

struct SimulatorConfig {
    unsigned int virtual_memory_size = 64 * 1024;
    unsigned int physical_memory_size = 8 * 1024;
}



#endif