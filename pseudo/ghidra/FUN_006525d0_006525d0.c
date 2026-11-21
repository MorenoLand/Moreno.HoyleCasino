// FUN_006525d0  006525d0

void __fastcall FUN_006525d0(undefined4 *param_1)

{
  char cVar1;
  DWORD DVar2;
  undefined4 uVar3;
  
  cVar1 = FUN_00650310();
  if ((cVar1 == '\0') && (cVar1 = FUN_00636ce0(), cVar1 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(*(int *)*param_1 + 0x54))(uVar3);
  *(undefined1 *)(param_1 + 4) = 0;
  DVar2 = GetTickCount();
  if (0 < (int)param_1[2]) {
    param_1[2] = param_1[2] + -1;
  }
  while ((0 < (int)param_1[2] &&
         (((*(int *)(param_1[0x20] + 8 + param_1[2] * 0x14) == 1 ||
           (*(int *)(param_1[0x20] + 8 + param_1[2] * 0x14) == 4)) ||
          (DVar2 <= *(int *)(param_1[0x20] + 0x10 + param_1[2] * 0x14) + 2000U))))) {
    param_1[2] = param_1[2] + -1;
  }
  param_1[5] = 0;
  FUN_00651af0();
  return;
}

