// FUN_00617a30  00617a30

undefined2 * FUN_00617a30(undefined2 *param_1,undefined4 param_2)

{
  undefined2 local_c;
  
  local_c = CONCAT11(param_2._1_1_,param_2._2_1_);
  *param_1 = local_c;
  *(undefined1 *)(param_1 + 1) = (undefined1)param_2;
  return param_1;
}

