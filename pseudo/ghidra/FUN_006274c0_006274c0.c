// FUN_006274c0  006274c0

undefined2 * __thiscall FUN_006274c0(int param_1,undefined2 *param_2,undefined4 param_3)

{
  undefined2 uVar1;
  undefined1 local_7 [3];
  
  uVar1 = (undefined2)param_3;
  FUN_00627520(local_7,(undefined1)param_3,param_3._1_1_,param_3._2_1_);
  *(undefined2 *)(param_1 + 0x48) = uVar1;
  *(undefined1 *)(param_1 + 0x4a) = param_3._2_1_;
  *param_2 = *(undefined2 *)(param_1 + 0x48);
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_1 + 0x4a);
  return param_2;
}

