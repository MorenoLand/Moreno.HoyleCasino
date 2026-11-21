// FUN_00588c30  00588c30

void __fastcall FUN_00588c30(int param_1)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_1c [3];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a6e8a;
  local_10 = ExceptionList;
  uVar1 = DAT_00781870 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c[0] = 0x8f;
  local_1c[1] = 0xf3;
  local_1c[2] = 0;
  do {
    if (1 < local_1c[2]) {
      if (*(int *)(param_1 + 0x314) == 0) {
        pvVar2 = operator_new(0x84);
        local_8 = 1;
        if (pvVar2 == (void *)0x0) {
          local_40 = 0;
        }
        else {
          local_40 = FUN_0058df60();
        }
        local_8 = 0xffffffff;
        *(undefined4 *)(param_1 + 0x314) = local_40;
      }
      *(int *)(*(int *)(param_1 + 0x314) + 4) = param_1;
      FUN_00584ed0(0x30d4cb,0x30d4cc,0x30d4cf);
      (**(code **)(**(int **)(param_1 + 0x314) + 0x40))(uVar1);
      (**(code **)(**(int **)(param_1 + 0x314) + 0x44))(0x118,0x30);
      (**(code **)(**(int **)(param_1 + 0x314) + 0x78))(0xf,0x100);
      (**(code **)(**(int **)(param_1 + 0x314) + 0x6c))(1);
      FUN_00585010();
      FUN_005f62f0(0);
      pvVar2 = operator_new(0x17c);
      local_8 = 2;
      if (pvVar2 == (void *)0x0) {
        local_44 = 0;
      }
      else {
        local_44 = FUN_0058ec60(param_1);
      }
      *(undefined4 *)(param_1 + 0x324) = local_44;
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(param_1 + 0x318 + local_1c[2] * 4) == 0) {
      pvVar2 = operator_new(0x8c);
      local_8 = 0;
      if (pvVar2 == (void *)0x0) {
        local_3c = 0;
      }
      else {
        local_3c = FUN_0058d750(local_1c[2]);
      }
      local_8 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x318 + local_1c[2] * 4) = local_3c;
      *(int *)(*(int *)(param_1 + 0x318 + local_1c[2] * 4) + 4) = param_1;
      (**(code **)(**(int **)(param_1 + 0x318 + local_1c[2] * 4) + 0x40))();
      FUN_00584ed0(0x30dfbd,0x30dfbe,0);
      (**(code **)(**(int **)(param_1 + 0x318 + local_1c[2] * 4) + 0x44))
                (local_1c[local_1c[2]],0x27);
      (**(code **)(**(int **)(param_1 + 0x318 + local_1c[2] * 4) + 0x78))(0xf,0x1d);
      (**(code **)(**(int **)(param_1 + 0x318 + local_1c[2] * 4) + 0x6c))(1);
      if (local_1c[2] == 0) {
        FUN_0058d840(&PTR_006b27f8);
        FUN_005ecc60(0x55);
        FUN_005eccb0(0x19);
        FUN_0058d840(param_1 + 0x3ba4 + *(int *)(param_1 + 0x3c08) * 0x10);
      }
      else {
        FUN_0058d840(&PTR_006b27f8);
        FUN_005ecc60(0x49);
        FUN_005eccb0(0x1b);
        FUN_0058d840(&DAT_006ccdd0);
        FUN_0058dc30(4);
      }
      if (local_1c[2] == 0) {
        iVar3 = (**(code **)(**(int **)(param_1 + 0x318) + 0xb0))();
        if (iVar3 == 1) {
          FUN_0058def0();
          goto LAB_00588c6f;
        }
      }
      FUN_0058dce0();
    }
LAB_00588c6f:
    local_1c[2] = local_1c[2] + 1;
  } while( true );
}

