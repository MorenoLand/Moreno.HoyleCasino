// Bias  004075f0

/* Library Function - Single Match
    private: void __thiscall Concurrency::details::WorkSearchContext::Bias(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Concurrency::details::WorkSearchContext::Bias(WorkSearchContext *this)

{
  *(int *)(this + 4) = *(int *)(this + 4) + 1;
  *(int *)(this + 8) = *(int *)(this + 8) + 1;
  return;
}

