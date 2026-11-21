// FUN_00544050  00544050

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_00544050(int param_1,undefined2 param_2,int param_3,int param_4,undefined1 param_5,char param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0;
  if (*(char *)(DAT_00793404 + 0x1c) == '\0') {
    (**(code **)(*DAT_0162ee84 + 0x80))(0x186a3,0,0,5,1,0x3f800000,_DAT_006b3654,0);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 0x1a4) = param_5;
  *(undefined2 *)(*(int *)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 400) = param_2;
  uVar1 = FUN_00543d20(param_3,param_6);
  FUN_005eaf00(uVar1);
  if (param_6 == '\0') {
    local_c = *(undefined4 *)(&DAT_0073b408 + param_4 * 8);
    local_8 = *(undefined4 *)(&DAT_0073b40c + param_4 * 8);
  }
  (**(code **)(**(int **)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 0x48))(local_c);
  (**(code **)(**(int **)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 0x50))(local_8);
  (**(code **)(**(int **)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 0x6c))(param_4 + 100);
  (**(code **)(**(int **)(param_1 + 0x44 + param_3 * 0x18 + param_4 * 4) + 0x74))();
  if ((param_3 == 0) && (iVar2 = FUN_00548f80(0), iVar2 < 3)) {
    FUN_00544300(0,0);
    return;
  }
  FUN_00544300(param_3,1);
  return;
}

