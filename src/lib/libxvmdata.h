/* libvminstr.h
 * Basic xVM instruction set
 */

#ifndef XVM_LIBVMINSTR
#define XVM_LIBVMINSTR

enum XVM_INSTRUCTION {
  VM_INSTRUCTION_NULL,   /* Null instruction, used as separator to stop argument skipping */
  XVM_INSTRUCTION_HALT,   /* Halt instruction, quit current program and reset program counter to 0 */
  XVM_INSTRUCTION_LOAD,   /* Load instruction, load something into a register */
  XVM_INSTRUCTION_MOVE,   /* Move instruction, move something from a register to another position in that register */
  XVM_INSTRUCTION_DEL,    /* Delete instruction, delete something from memory (overwrite with \0 for char register and 0 with memory or int register) */
  XVM_INSTRUCTION_COPY,   /* Copy instruction, copy something in a register to another place in that or another register */
  XVM_INSTRUCTION_PRINT,  /* Print instruction, write a character from char register to screen */
  XVM_INSTRUCTION_ADD,    /* Add instruction, add two numbers in the int register */
  XVM_INSTRUCTION_SUBT,   /* Substract instruction, substract two numbers in the int register */
  XVM_INSTRUCTION_LOADSTR /* Load string instruction, load a string into char register */
}; /* VM instruction numbers */

enum XVM_REGISTER {
  VM_REGISTER_MEMORY, /* Program memory register */
  VM_REGISTER_INTREG, /* Intenger register */
  VM_REGISTER_STRREG  /* String/character register */
};

#endif