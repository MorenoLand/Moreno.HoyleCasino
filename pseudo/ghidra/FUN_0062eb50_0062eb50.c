// FUN_0062eb50  0062eb50

void FUN_0062eb50(ushort param_1,ushort param_2,ushort param_3,undefined4 *param_4,
                 undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *local_14;
  undefined2 local_10;
  int local_8;
  
  puVar5 = (undefined4 *)0x0;
  for (local_8 = 0; local_8 < (int)(uint)param_2; local_8 = local_8 + 1) {
    local_14 = (undefined4 *)0x0;
    while ((int)local_14 < (int)(uint)param_1) {
      uVar2 = *param_5;
      puVar1 = param_5 + 1;
      param_5 = (undefined2 *)((int)param_5 + 3);
      local_10._0_1_ = (undefined1)uVar2;
      uVar3 = (undefined1)local_10;
      local_10 = CONCAT11((char)((ushort)uVar2 >> 8),*(undefined1 *)puVar1);
      uVar4 = FUN_00617af0(CONCAT13((char)((uint)puVar5 >> 0x18),CONCAT12(uVar3,local_10)));
      *param_4 = uVar4;
      param_4 = param_4 + 1;
      puVar5 = (undefined4 *)((int)local_14 + 1);
      local_14 = puVar5;
    }
    puVar5 = param_4 + -(uint)param_3;
    param_4 = puVar5;
  }
  return;
}

