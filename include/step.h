#ifndef STEP_H
#define STEP_H

#include <string>

/*
 * The idea for this is: what peices of information does my simulator need to hand to the UI for a step-by-step translation?
 * So what sequence of steps will we take and feed into our UI exactly
 * 
 * Well here is the list:
 * 1. Split Address
 *    - So, we have our Virtual Address which needs to be split into a VPN and an offset
 * 2. Check TLB
 *    - In this step we check if the VPN already is cached in our TLB (Translation Lookaside Buffer)
 * 3. TLB Miss
 *    - In this step, we check what to do when we miss in our TLB, which is go to Page Table
 * 4. TLB Hit
 *    - In this step, we check what to do when we hit in our TLB, which is return PPN
 * 5. Check Page Table
 *    - In the case that we miss in the TLB, we check the Page Table by using the VPN to index into it
 * 6. Page Table Miss (Page Fault)
 *    - In this step, we check what to do when we miss in the Page Table look up, which is basically that the entry was invalid and the page is not currently in Physical Memory (RAM)
 * 7. Page Table Hit
 *    - In this step, we check what to do when we hit in the Page Table look up, which is basically that we found the valid entry and we retrieve the PPN
 * 8. Build Physical Address
 *    - In this we build our physical address by combining PPN with offset.
 * 9. Complete
 *    - Translation finished
*/

// The steps fed into the UI
enum class StepType {
    SplitAddress,
    CheckTLB,
    TLBHit,
    TLBMiss,
    CheckPageTable,
    PageTableHit,
    PageFault,
    BuildPhysicalAddress,
    Complete
};

// Data attached to each step of the simulation
struct SimulationStep {
    StepType type;
    std::string message;

    unsigned int virtual_address = 0;
    unsigned int vpn = 0;
    unsigned int offset = 0;
    unsigned int ppn = 0;
    unsigned int physical_address = 0;

    bool tlb_hit = false;
    bool page_fault = false;
};

#endif