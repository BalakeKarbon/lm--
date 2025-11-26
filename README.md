# lm--
The smallest Language Model you have seen. I'm talking kilobytes of memory.

**WIP:**
Hopes to get a proof of concept LM running on my IBM 5155 with a 4.77MHZ 16 bit Intel 8088, 512K of memory, and a 20MB HDD.
It will likely be unusably slow and produce horrid results but will *technically* be a GPT running on a computer from 1984.

Current theory is to implement a INT16 LSTM model or perhaps experiment with a GPT even though our primary target does not benefit from parallelization.
