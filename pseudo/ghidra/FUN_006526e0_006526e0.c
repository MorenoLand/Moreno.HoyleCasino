// FUN_006526e0  006526e0

void __fastcall FUN_006526e0(undefined4 *param_1)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = FUN_00650310();
  if ((cVar2 == '\0') && (cVar2 = FUN_00636ce0(), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  (**(code **)(*(int *)*param_1 + 0x54))();
  cVar2 = *(char *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = 0;
  FUN_00652860();
  if ((((*(int *)(param_1[2] * 0x14 + param_1[0x20]) == 0) ||
       (*(int *)((param_1[2] + 1) * 0x14 + param_1[0x20]) == 0)) || (bVar1)) || (cVar2 != '\0')) {
    FUN_00651af0();
  }
  else if (*(int *)(param_1[0x20] + 8 + param_1[2] * 0x14) == 3) {
    (**(code **)(*(int *)*param_1 + 0x224))
              (*(undefined4 *)(param_1[0x20] + param_1[2] * 0x14),
               *(undefined4 *)(param_1[0x20] + 4 + (param_1[2] + 1) * 0x14));
    param_1[2] = param_1[2] + 1;
  }
  else {
    param_1[2] = param_1[2] + 1;
    if (*(int *)(param_1[0x20] + 8 + param_1[2] * 0x14) == 1) {
      param_1[2] = param_1[2] + 1;
    }
    FUN_00651af0();
  }
  return;
}

