// FUN_005b60c0  005b60c0

undefined1 FUN_005b60c0(undefined4 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_1c [8];
  undefined8 local_14;
  undefined1 local_c [8];
  
  uVar2 = FUN_0064c8a0(0,0);
  local_14 = uVar2;
  FUN_005cb880(local_c,param_1);
  cVar1 = FUN_0064c6e0(uVar2);
  if (cVar1 == '\0') {
    uVar2 = FUN_0064c8a0(0,0);
    FUN_005cb880(local_1c,param_1);
    cVar1 = FUN_0064c6e0(uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}

