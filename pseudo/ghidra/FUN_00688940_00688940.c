// FUN_00688940  00688940

/* WARNING: Type propagation algorithm not settling */

char * FUN_00688940(char *param_1)

{
  uint local_c8;
  char *local_c4 [48];
  
  local_c4[1] = "a Control-C";
  local_c4[2] = (char *)0x40010008;
  local_c4[3] = "a Control-Break";
  local_c4[4] = (char *)0x80000002;
  local_c4[5] = "a Datatype Misalignment";
  local_c4[6] = (char *)0x80000003;
  local_c4[7] = "a Breakpoint";
  local_c4[8] = (char *)0xc0000005;
  local_c4[9] = "an Access Violation";
  local_c4[10] = (char *)0xc0000006;
  local_c4[0xb] = "an In Page Error";
  local_c4[0xc] = (char *)0xc0000017;
  local_c4[0xd] = "a No Memory";
  local_c4[0xe] = (char *)0xc000001d;
  local_c4[0xf] = "an Illegal Instruction";
  local_c4[0x10] = (char *)0xc0000025;
  local_c4[0x11] = "a Noncontinuable Exception";
  local_c4[0x12] = (char *)0xc0000026;
  local_c4[0x13] = "an Invalid Disposition";
  local_c4[0x14] = (char *)0xc000008c;
  local_c4[0x15] = "a Array Bounds Exceeded";
  local_c4[0x16] = (char *)0xc000008d;
  local_c4[0x17] = "a Float Denormal Operand";
  local_c4[0x18] = (char *)0xc000008e;
  local_c4[0x19] = "a Float Divide by Zero";
  local_c4[0x1a] = (char *)0xc000008f;
  local_c4[0x1b] = "a Float Inexact Result";
  local_c4[0x1c] = (char *)0xc0000090;
  local_c4[0x1d] = "a Float Invalid Operation";
  local_c4[0x1e] = (char *)0xc0000091;
  local_c4[0x1f] = "a Float Overflow";
  local_c4[0x20] = (char *)0xc0000092;
  local_c4[0x21] = "a Float Stack Check";
  local_c4[0x22] = (char *)0xc0000093;
  local_c4[0x23] = "a Float Underflow";
  local_c4[0x24] = (char *)0xc0000094;
  local_c4[0x25] = "an Integer Divide by Zero";
  local_c4[0x26] = (char *)0xc0000095;
  local_c4[0x27] = "an Integer Overflow";
  local_c4[0x28] = (char *)0xc0000096;
  local_c4[0x29] = "a Privileged Instruction";
  local_c4[0x2a] = (char *)0xc00000fd;
  local_c4[0x2b] = "a Stack Overflow";
  local_c4[0x2c] = (char *)0xc0000142;
  local_c4[0x2d] = "a DLL Initialization Failed";
  local_c4[0x2e] = (char *)0xe06d7363;
  local_c4[0x2f] = "a Microsoft C++ Exception";
  local_c8 = 0;
  while( true ) {
    if (0x17 < local_c8) {
      return "Unknown exception type";
    }
    if (param_1 == local_c4[local_c8 * 2]) break;
    local_c8 = local_c8 + 1;
  }
  return local_c4[local_c8 * 2 + 1];
}

