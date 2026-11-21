// FUN_005230a0  005230a0

void __fastcall FUN_005230a0(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  void *pvVar7;
  undefined4 local_4c;
  int local_24;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006a3ff6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x70))(DAT_00781870 ^ (uint)&stack0xfffffffc);
  local_18 = 0;
  do {
    if (0xa0 < local_18) {
      ExceptionList = local_10;
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x80 + local_18 * 4) + 0xae0) != 0) {
      FUN_00523e40();
      for (local_24 = 0; local_24 < 4; local_24 = local_24 + 1) {
        piVar1 = *(int **)(*(int *)(param_1 + 0x80 + local_18 * 4) + 0x17c + local_24 * 0x1e0);
        if (piVar1 != (int *)0x0) {
          cVar2 = FUN_005f54a0();
          if (cVar2 != '\0') {
            FUN_005dcb00(local_24);
            piVar3 = (int *)FUN_00646f80();
            uVar4 = (**(code **)(*piVar3 + 0x4c))();
            FUN_005dcb00(local_24);
            piVar3 = (int *)FUN_00646f80();
            uVar5 = (**(code **)(*piVar3 + 0x54))();
            iVar6 = FUN_00637810(4);
            piVar1[0x61] = iVar6;
            if (piVar1[0x61] != 0) {
              cVar2 = FUN_00637630();
              if (cVar2 != '\0') {
                pvVar7 = operator_new(0x2c);
                local_8 = 0;
                if (pvVar7 == (void *)0x0) {
                  local_4c = 0;
                }
                else {
                  local_4c = FUN_00606e60(0,uVar4,uVar5,0);
                }
                local_8 = 0xffffffff;
                FUN_005f6050(local_4c);
                goto LAB_00523131;
              }
            }
            (**(code **)(*piVar1 + 0x44))(uVar4,uVar5);
          }
        }
LAB_00523131:
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

