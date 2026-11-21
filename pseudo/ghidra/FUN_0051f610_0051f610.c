// FUN_0051f610  0051f610

uint __thiscall FUN_0051f610(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  uint in_EAX;
  uint local_8;
  
  local_8 = 0;
  while( true ) {
    if (3 < (int)local_8) {
      return in_EAX & 0xffffff00;
    }
    cVar1 = FUN_00520770(param_2,local_8,param_1);
    if (cVar1 != '\0') break;
    in_EAX = local_8 + 1;
    local_8 = in_EAX;
  }
  return 1;
}

