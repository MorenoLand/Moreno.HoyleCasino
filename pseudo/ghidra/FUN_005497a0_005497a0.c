// FUN_005497a0  005497a0

undefined4 __fastcall FUN_005497a0(undefined4 param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_00549770(param_1);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    cVar1 = FUN_00549910();
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

