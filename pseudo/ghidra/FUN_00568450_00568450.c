// FUN_00568450  00568450

void __thiscall FUN_00568450(int param_1,undefined1 param_2)

{
  char cVar1;
  int local_24 [6];
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    FUN_005e9f20("extraHands","..\\Casino\\vpmstate.cpp",0x41);
  }
  local_24[0] = 1;
  local_24[1] = 5;
  local_24[2] = 10;
  local_24[3] = 0x19;
  local_24[4] = 0x32;
  local_c = 0;
  local_24[5] = FUN_0056b910();
  local_8 = 4;
  do {
    if (local_8 < 0) {
LAB_00568500:
      if (local_24[5] < local_c) {
        FUN_0056a7a0(local_24[5],param_2);
      }
      return;
    }
    FUN_0056a7a0(local_24[local_8] + -1,param_2);
    cVar1 = FUN_0056a5d0();
    if (cVar1 != '\0') {
      local_c = local_24[local_8] + -1;
      goto LAB_00568500;
    }
    local_8 = local_8 + -1;
  } while( true );
}

