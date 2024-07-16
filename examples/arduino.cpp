/******************************************************************************
Finite State Machine
Project: sm.dot
Description: gv_fsm example

Generated by gv_fsm ruby gem, see https://rubygems.org/gems/gv_fsm
gv_fsm version 0.2.6
Generation date: 2020-09-07 12:53:32 +0200
Generated from: sm.dot
The finite state machine has:
  5 states
  5 transition functions
******************************************************************************/

#include "arduino.h"

// SEARCH FOR Your Code Here FOR CODE INSERTION POINTS!

// GLOBALS
// State human-readable names
const char *state_names[] = {"init", "idle", "setup", "running", "stop"};

// List of state functions
state_func_t *const state_table[NUM_STATES] = {
  do_init,    // in state init
  do_idle,    // in state idle
  do_setup,   // in state setup
  do_running, // in state running
  do_stop,    // in state stop
};

// Table of transition functions
transition_func_t *const transition_table[NUM_STATES][NUM_STATES] = {
  /* states:     init            , idle            , setup           , running         , stop             */
  /* init    */ {NULL            , init_to_idle    , NULL            , NULL            , NULL            }, 
  /* idle    */ {NULL            , stay            , to_setup        , NULL            , NULL            }, 
  /* setup   */ {NULL            , NULL            , NULL            , setup_to_running, NULL            }, 
  /* running */ {NULL            , to_idle         , NULL            , stay            , NULL            }, 
  /* stop    */ {NULL            , NULL            , NULL            , NULL            , NULL            }, 
};

//  ____  _        _       
// / ___|| |_ __ _| |_ ___ 
// \___ \| __/ _` | __/ _ \
//  ___) | || (_| | ||  __/
// |____/ \__\__,_|\__\___|
//                         
//   __                  _   _                 
//  / _|_   _ _ __   ___| |_(_) ___  _ __  ___ 
// | |_| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// |  _| |_| | | | | (__| |_| | (_) | | | \__ \
// |_|  \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
//                                             

// Function to be executed in state init
// valid return states: STATE_IDLE
state_t do_init(state_data_t *data) {
  state_t next_state = STATE_IDLE;

  Serial.println("[FSM] In state init");
  /* Your Code Here */
  
  switch (next_state) {
    case STATE_IDLE:
      break;
    default:
      Serial.print("[FSM] Cannot pass from init to ");
      Serial.print(state_names[next_state]);
      Serial.println(", remaining in this state");
      next_state = NO_CHANGE;
  }
  return next_state;
}


// Function to be executed in state idle
// valid return states: NO_CHANGE, STATE_IDLE, STATE_SETUP
state_t do_idle(state_data_t *data) {
  state_t next_state = NO_CHANGE;

  Serial.println("[FSM] In state idle");
  /* Your Code Here */
  
  switch (next_state) {
    case NO_CHANGE:
    case STATE_IDLE:
    case STATE_SETUP:
      break;
    default:
      Serial.print("[FSM] Cannot pass from idle to ");
      Serial.print(state_names[next_state]);
      Serial.println(", remaining in this state");
      next_state = NO_CHANGE;
  }
  return next_state;
}


// Function to be executed in state setup
// valid return states: STATE_RUNNING
state_t do_setup(state_data_t *data) {
  state_t next_state = STATE_RUNNING;

  Serial.println("[FSM] In state setup");
  /* Your Code Here */
  
  switch (next_state) {
    case STATE_RUNNING:
      break;
    default:
      Serial.print("[FSM] Cannot pass from setup to ");
      Serial.print(state_names[next_state]);
      Serial.println(", remaining in this state");
      next_state = NO_CHANGE;
  }
  return next_state;
}


// Function to be executed in state running
// valid return states: NO_CHANGE, STATE_IDLE, STATE_RUNNING, STATE_STOP
state_t do_running(state_data_t *data) {
  state_t next_state = NO_CHANGE;

  Serial.println("[FSM] In state running");
  /* Your Code Here */
  
  switch (next_state) {
    case NO_CHANGE:
    case STATE_IDLE:
    case STATE_RUNNING:
    case STATE_STOP:
      break;
    default:
      Serial.print("[FSM] Cannot pass from running to ");
      Serial.print(state_names[next_state]);
      Serial.println(", remaining in this state");
      next_state = NO_CHANGE;
  }
  return next_state;
}


// Function to be executed in state stop
// valid return states: NO_CHANGE
state_t do_stop(state_data_t *data) {
  state_t next_state = NO_CHANGE;

  Serial.println("[FSM] In state stop");
  /* Your Code Here */
  
  switch (next_state) {
    case NO_CHANGE:
      break;
    default:
      Serial.print("[FSM] Cannot pass from stop to ");
      Serial.print(state_names[next_state]);
      Serial.println(", remaining in this state");
      next_state = NO_CHANGE;
  }
  return next_state;
}


//  _____                    _ _   _              
// |_   _| __ __ _ _ __  ___(_) |_(_) ___  _ __   
//   | || '__/ _` | '_ \/ __| | __| |/ _ \| '_ \
//   | || | | (_| | | | \__ \ | |_| | (_) | | | | 
//   |_||_|  \__,_|_| |_|___/_|\__|_|\___/|_| |_| 
//                                                
//   __                  _   _                 
//  / _|_   _ _ __   ___| |_(_) ___  _ __  ___ 
// | |_| | | | '_ \ / __| __| |/ _ \| '_ \/ __|
// |  _| |_| | | | | (__| |_| | (_) | | | \__ \
// |_|  \__,_|_| |_|\___|\__|_|\___/|_| |_|___/
//    
                                         
// This function is called in 1 transition:
// 1. from init to idle
void init_to_idle(state_data_t *data) {
  Serial.println("[FSM] State transition init_to_idle");
  /* Your Code Here */
}

// This function is called in 2 transitions:
// 1. from idle to idle
// 2. from running to running
void stay(state_data_t *data) {
  Serial.println("[FSM] State transition stay");
  /* Your Code Here */
}

// This function is called in 1 transition:
// 1. from idle to setup
void to_setup(state_data_t *data) {
  Serial.println("[FSM] State transition to_setup");
  /* Your Code Here */
}

// This function is called in 1 transition:
// 1. from setup to running
void setup_to_running(state_data_t *data) {
  Serial.println("[FSM] State transition setup_to_running");
  /* Your Code Here */
}

// This function is called in 1 transition:
// 1. from running to idle
void to_idle(state_data_t *data) {
  Serial.println("[FSM] State transition to_idle");
  /* Your Code Here */
}


//  ____  _        _        
// / ___|| |_ __ _| |_ ___  
// \___ \| __/ _` | __/ _ \
//  ___) | || (_| | ||  __/ 
// |____/ \__\__,_|\__\___| 
//                          
//                                              
//  _ __ ___   __ _ _ __   __ _  __ _  ___ _ __ 
// | '_ ` _ \ / _` | '_ \ / _` |/ _` |/ _ \ '__|
// | | | | | | (_| | | | | (_| | (_| |  __/ |   
// |_| |_| |_|\__,_|_| |_|\__,_|\__, |\___|_|   
//                              |___/           

state_t run_state(state_t cur_state, state_data_t *data) {
  state_t new_state = state_table[cur_state](data);
  if (new_state == NO_CHANGE) new_state = cur_state;
  transition_func_t *transition = transition_table[cur_state][new_state];
  if (transition)
    transition(data);
  return new_state == NO_CHANGE ? cur_state : new_state;
};

/* Example usage:
state_data_t data = {count: 1};

void loop() {
  static state_t cur_state = STATE_INIT;
  cur_state = run_state(cur_state, &data);
}
*/