// FUN_005d1210  005d1210

void __fastcall FUN_005d1210(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = param_1[2];
  local_8 = (**(code **)(*param_1 + 4))();
  local_8 = local_8 - iVar2;
  if (param_1[1] < local_8) {
    if (param_1[1] != 0) {
      local_8 = local_8 - param_1[1];
      param_1[2] = param_1[2] + param_1[1];
      FUN_005d0a20(0);
    }
    piVar3 = (int *)FUN_005d0c30(local_1c,local_8);
    local_10 = *piVar3;
    iVar2 = piVar3[1];
    local_c = iVar2;
    if (local_10 == 0) {
      local_10 = iVar2 / 100;
      local_c = iVar2 % 100;
      local_14 = iVar2;
    }
    cVar1 = FUN_005d0d60(local_8);
    if (cVar1 == '\0') {
      puVar5 = local_24;
      FUN_005dcb00(0,puVar5);
      puVar4 = (undefined4 *)FUN_005d5a90(puVar5);
      local_8 = FUN_005d0d30(*puVar4,puVar4[1]);
      if (local_8 != 0) {
        piVar3 = (int *)FUN_005d0c30(local_2c,local_8);
        local_10 = -*piVar3;
        local_c = -piVar3[1];
        param_1[2] = param_1[2] + local_8;
        FUN_005d1420(local_10,local_c);
      }
    }
    else {
      iVar2 = (**(code **)(*param_1 + 4))();
      param_1[2] = iVar2;
      local_10 = -local_10;
      local_c = -local_c;
      FUN_005d1420(local_10,local_c);
    }
  }
  else {
    FUN_005d0a20(param_1[1] - local_8);
    iVar2 = (**(code **)(*param_1 + 4))();
    param_1[2] = iVar2;
  }
  return;
}

