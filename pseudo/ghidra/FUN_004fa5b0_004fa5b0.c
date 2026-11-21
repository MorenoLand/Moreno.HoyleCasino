// FUN_004fa5b0  004fa5b0

void __thiscall FUN_004fa5b0(int *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_28 [9];
  
  local_28[0] = 5;
  local_28[1] = 0;
  local_28[2] = 1;
  local_28[3] = 2;
  local_28[4] = 3;
  local_28[5] = 4;
  local_28[6] = 6;
  local_28[7] = 7;
  *param_3 = 0;
  param_3[1] = 0;
  cVar1 = (**(code **)(*param_1 + 0x80))();
  if (cVar1 == '\0') {
    local_28[8] = FUN_0047e390(local_28[param_2]);
    uVar2 = FUN_004c7050();
    uVar2 = FUN_004f6c40(uVar2);
    *param_3 = uVar2;
  }
  return;
}

