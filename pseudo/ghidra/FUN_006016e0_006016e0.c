// FUN_006016e0  006016e0

void __fastcall FUN_006016e0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x18) != '\0') {
    uVar1 = FUN_00601730();
    (**(code **)(**(int **)(param_1 + 4) + 0xb0))(uVar1);
  }
  return;
}

