// FUN_006052f0  006052f0

void __fastcall FUN_006052f0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_2c;
  
  iVar2 = abs(*(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x50));
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    local_2c = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  }
  else {
    local_2c = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x5c);
  }
  local_2c = local_2c + 1;
  cVar1 = FUN_006050f0();
  if (cVar1 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x54))();
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))();
  }
  if ((double)local_2c / (double)iVar2 == 0.0) {
    FUN_005e9f20("false","..\\scilib\\scislider.cpp",0xb2);
  }
  else {
    uVar4 = 0;
    uVar3 = FUN_00686cc0(0);
    FUN_00605110(uVar3,uVar4);
  }
  return;
}

