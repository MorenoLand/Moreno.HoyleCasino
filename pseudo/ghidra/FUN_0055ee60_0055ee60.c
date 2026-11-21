// FUN_0055ee60  0055ee60

undefined4 __fastcall FUN_0055ee60(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int local_10;
  int local_c;
  
  bVar1 = false;
  uVar4 = 0xffffffff;
  local_c = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x14) * 2),param_1,
                         0xffffffff);
  iVar2 = FUN_00641280(*(undefined2 *)(param_1 + 4 + *(char *)(param_1 + 0x16) * 2));
  local_10 = 0;
  do {
    if (2 < local_10) {
LAB_0055eeea:
      if (bVar1) {
        for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
          iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_10) >> 0x10),
                                        *(undefined2 *)
                                         (param_1 + 4 + *(char *)(param_1 + local_10 + 0x14) * 2)));
          if ((iVar3 != 0xe) &&
             (iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_10) >> 0x10),
                                            *(undefined2 *)
                                             (param_1 + 4 + *(char *)(param_1 + local_10 + 0x14) * 2
                                             ))), iVar3 == 5)) {
            return 1;
          }
        }
      }
      if (iVar2 < local_c) {
        local_c = iVar2;
      }
      return CONCAT31((int3)((uint)(local_c + 4) >> 8),local_c + 4 == iVar2);
    }
    iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_10) >> 0x10),
                                  *(undefined2 *)
                                   (param_1 + 4 + *(char *)(param_1 + local_10 + 0x14) * 2)),param_1
                         ,uVar4);
    if (iVar3 == 0xe) {
      bVar1 = true;
      goto LAB_0055eeea;
    }
    local_10 = local_10 + 1;
  } while( true );
}

