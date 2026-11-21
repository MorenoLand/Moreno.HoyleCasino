// FUN_00644fd0  00644fd0

void __fastcall FUN_00644fd0(int *param_1)

{
  char cVar1;
  int local_8;
  
  local_8 = 0x3ff;
  while( true ) {
    if (local_8 < 0) {
      (**(code **)(*param_1 + 0x54))();
      return;
    }
    if ((param_1[local_8 + 0x65] != 0) && (cVar1 = FUN_005f54a0(), cVar1 != '\0')) break;
    local_8 = local_8 + -1;
  }
  (**(code **)(*(int *)param_1[local_8 + 0x65] + 0x54))();
  return;
}

