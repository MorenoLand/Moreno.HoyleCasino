// FUN_00627520  00627520

undefined2 * __thiscall
FUN_00627520(int *param_1,undefined2 *param_2,char param_3,char param_4,char param_5)

{
  bool bVar1;
  bool local_5;
  
  bVar1 = (char)param_1[0x12] != param_3;
  if (bVar1) {
    *(char *)(param_1 + 0x12) = param_3;
  }
  local_5 = *(char *)((int)param_1 + 0x49) != param_4;
  if (local_5) {
    *(char *)((int)param_1 + 0x49) = param_4;
  }
  local_5 = local_5 || bVar1;
  if (*(char *)((int)param_1 + 0x4a) != param_5) {
    *(char *)((int)param_1 + 0x4a) = param_5;
    local_5 = true;
  }
  if (local_5) {
    (**(code **)(*param_1 + 0xac))();
  }
  *param_2 = (short)param_1[0x12];
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)((int)param_1 + 0x4a);
  return param_2;
}

