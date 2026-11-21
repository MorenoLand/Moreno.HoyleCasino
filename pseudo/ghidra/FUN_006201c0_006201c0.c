// FUN_006201c0  006201c0

int __thiscall FUN_006201c0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  ushort extraout_var;
  ushort extraout_var_00;
  int local_1c;
  int local_14;
  int local_c;
  int local_8;
  
  local_c = param_2;
  FUN_006204b0(&local_c,0x20786574);
  FUN_006204b0(&local_c,0x31303031);
  for (local_8 = 0; local_8 < 0x100; local_8 = local_8 + 1) {
    FUN_006204f0(&local_c,param_1 + 8 + local_8 * 3,1);
    FUN_006204f0(&local_c,param_1 + 9 + local_8 * 3,1);
    FUN_006204f0(&local_c,param_1 + 10 + local_8 * 3,1);
  }
  FUN_006204d0(&local_c,*(undefined2 *)(param_1 + 0x30c));
  for (local_8 = 0; local_8 < *(int *)(param_1 + 0x30c); local_8 = local_8 + 1) {
    FUN_006204d0(&local_c,CONCAT22((short)((uint)*(int *)(param_1 + 0x310) >> 0x10),
                                   *(undefined2 *)(*(int *)(param_1 + 0x310) + local_8 * 8)));
    for (local_1c = 0; local_1c < *(int *)(*(int *)(param_1 + 0x310) + local_8 * 8);
        local_1c = local_1c + 1) {
      FUN_006204d0(&local_c,*(undefined2 *)
                             (local_1c * 0x18 +
                             *(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8)));
      FUN_006204d0(&local_c,*(undefined2 *)
                             (*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) + 4 +
                             local_1c * 0x18));
      FUN_006204d0(&local_c,(uint)extraout_var_00 << 0x10);
      FUN_006204d0(&local_c,(uint)extraout_var << 0x10);
      FUN_006204d0(&local_c,*(undefined2 *)
                             (*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) + 8 +
                             local_1c * 0x18));
      FUN_006204d0(&local_c,*(undefined2 *)
                             (*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) + 0xc +
                             local_1c * 0x18));
      for (local_14 = 0;
          local_14 <
          *(int *)(*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) + 4 + local_1c * 0x18);
          local_14 = local_14 + 1) {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) + 0x10 +
                        local_1c * 0x18);
        sVar1 = *(short *)(iVar2 + local_14 * 4);
        FUN_006204d0(&local_c,CONCAT22((short)((uint)iVar2 >> 0x10),sVar1));
        FUN_006204f0(&local_c,*(undefined4 *)
                               (*(int *)(*(int *)(*(int *)(param_1 + 0x310) + 4 + local_8 * 8) +
                                         0x14 + local_1c * 0x18) + local_14 * 4),(int)sVar1);
      }
    }
  }
  return local_c - param_2;
}

