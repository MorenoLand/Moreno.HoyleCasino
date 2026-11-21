// FUN_005519e0  005519e0

undefined4 __fastcall FUN_005519e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  uVar1 = FUN_00641230(2,4);
  iVar2 = FUN_0054c590(uVar1);
  local_8 = 0;
  do {
    if (3 < local_8) {
      return 1;
    }
    if ((*(char *)(param_1 + local_8 + 0x14) != -1) && (*(char *)(param_1 + local_8 + 0x15) != -1))
    {
      iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x14) * 2)));
      if (iVar3 == 0xe) {
        return 0;
      }
      iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x15) * 2)));
      if (iVar3 == 0xe) {
        return 0;
      }
      iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x14) * 2)));
      if (iVar3 == (iVar2 == 0x14) + 2) {
        return 0;
      }
      iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x15) * 2)));
      if (iVar3 == (iVar2 == 0x14) + 2) {
        return 0;
      }
      iVar3 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x14) * 2)));
      iVar4 = FUN_00641280(CONCAT22((short)((uint)(param_1 + local_8) >> 0x10),
                                    *(undefined2 *)
                                     (param_1 + 4 + *(char *)(param_1 + local_8 + 0x15) * 2)));
      if (iVar3 + 1 != iVar4) {
        return 0;
      }
    }
    local_8 = local_8 + 1;
  } while( true );
}

