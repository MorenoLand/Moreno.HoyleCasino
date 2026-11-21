// FUN_00451f60  00451f60

void __thiscall FUN_00451f60(int param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_8;
  
  local_8 = 0;
  do {
    if (6 < local_8) {
      FUN_004512c0(param_2,param_3);
      return;
    }
    iVar2 = FUN_0044f680(*(undefined2 *)(param_1 + 4 + local_8 * 2));
    iVar3 = FUN_0044f680(*(undefined2 *)(param_1 + 6 + local_8 * 2));
    if (iVar2 == iVar3) {
      iVar3 = local_8 + 1;
      iVar2 = local_8;
      uVar5 = param_2;
      uVar6 = param_3;
      uVar4 = FUN_0044f680(CONCAT22((short)((uint)local_8 >> 0x10),
                                    *(undefined2 *)(param_1 + 4 + local_8 * 2)));
      cVar1 = FUN_00451870(uVar4,iVar2,iVar3,uVar5,uVar6);
      if (cVar1 != '\0') {
        return;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

