// FUN_0060a9c0  0060a9c0

int __thiscall
FUN_0060a9c0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int local_8;
  
  if (DAT_007960cb == '\0') {
    if (*(char *)(param_1 + 10) == '\0') {
      if (((*(char *)(param_1 + 9) == '\0') || (*(char *)(param_1 + 8) == '\0')) || (param_2 == 0))
      {
        iVar1 = -1;
      }
      else {
        iVar1 = FUN_00609e00();
        if (iVar1 == -1) {
          iVar1 = -1;
        }
        else {
          *(int *)(&DAT_00796d38 + iVar1 * 0x74) = param_2;
          if (param_3 == 0) {
            (&DAT_00796d3c)[iVar1 * 0x74] = 0;
            FUN_0062fde0(">>> playing song %d\n",*(undefined4 *)(&DAT_00796d38 + iVar1 * 0x74));
            iVar1 = FUN_0060b0b0(iVar1,param_4,param_5,param_6);
          }
          else {
            (&DAT_00796d3c)[iVar1 * 0x74] = 1;
            *(undefined4 *)(&DAT_00796d40 + iVar1 * 0x74) = 0xffffffff;
            for (local_8 = 0; *(int *)(param_3 + local_8 * 4) != -1; local_8 = local_8 + 1) {
              *(undefined4 *)(&DAT_00796d44 + local_8 * 4 + iVar1 * 0x74) =
                   *(undefined4 *)(param_3 + local_8 * 4);
            }
            *(undefined4 *)(&DAT_00796d44 + local_8 * 4 + iVar1 * 0x74) = 0xffffffff;
            *(undefined4 *)(&DAT_00796d94 + iVar1 * 0x74) = param_5;
            *(undefined4 *)(&DAT_00796d98 + iVar1 * 0x74) = param_6;
            FUN_0060ab30(iVar1,0);
          }
        }
      }
    }
    else {
      iVar1 = 0;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

