--title Blockchain
--heading What they are, how they're used, and other things

--date today
--author Jeremy Cerise
--center mail@jeremyceri.se

--newpage What this Presentation is
--heading Introduction
What this presentation is
--beginoutput
	* Brief Introduction

	* What is blockchain?

		* How do they work

		* What problems do they solve

		* Why won't people shut up about them

	* CryptoCurrency (Bitcoin)

		* How does Bitcoin utilize a blockchain

	* Other uses

	* Questions

--endoutput

--newpage What this Presentation is Not
--heading Introduction
What this presentation is not
--beginoutput
---:
	* A discussion of the politics around CryptoCurrency
---:

	* A discussion of the environments surrounding CryptoCurrency
---:

	* A guide to getting rich with CryptoCurrency
---:

	* A platform to advertise any CyrptoCurrency or AltCoin
---:

	* An argument for or against blockchain technology
--endoutput

--newpage Who am I?
--heading Who am I, and why am I qualified to be talking about this?
---:

* B.S. in Computer Science, Fort Lewis College, Durango CO
---:

* Software Engineer at Tesla (Motors) (Energy)
---:

* Tinkerer of Bitcoin, Litecoin, Ethereum, and general blockchain
---:

* Professional jack of all trades in technology

---:
--center Bottom line, I'm probably not qualified, but I'm going to talk about it anyways.

--newpage Where did all of this start?
--heading Introdution
Where did all of this start?

---:
Satoshi Nakamoto and the Bitcoin whitepaper (2009)
---:

	* Decentralized
---:

	* Peer to Peer
---:

	* No third party validation
---:

	* Anonymous
---:

	* Secure

--newpage Satoshi quote
--heading What is a blockchain?
--beginoutput
--center "A purely peer-to-peer version of electronic cash would allow online payments to be sent directly from one party to another without going through a financial institution. Digital signatures provide part of the solution, but the main benefits are lost if a trusted third party is still required to prevent double-spending. We propose a solution to the double-spending problem using a peer-to-peer network. The network timestamps transactions by hashing them into an ongoing chain of hash-based proof-of-work, forming a record that cannot be changed without redoing the proof-of-work."
--endoutput

--newpage What is a blockchain?
--heading What is a blockchain?
---:

A blockchain is a distributed database
---:

* Every user has a copy of the blockchain
---:

* Every copy is continually reconciled
---:

* Every piece of data is openly available to every user
---:

* Peer to Peer, no central servers or controllers
---:

* Think Bitorrent in the early 2000's

--newpage What is a blockchain? 2
--heading A blockchain is a simple data structure
---:

* A blockchain is, at its core, a reverse linked list.
---:
--beginoutput
--center Item1 -> Item2 -> Item3 -> ... -> ItemN
--endoutput
---:

--beginoutput
--center GenesisBlock <-- Block1 <-- Block2 <-- Block3 ... <-- BlockN
--endoutput

---:
* Each block points back to the previous block in the chain
---:
	* The start of the chain is the genesis block
---:
	* The end of the chain is the most recent confirmed/verified block
--newpage What is a blockchain? 3

--heading A blockchain is composed of "blocks"
---:

* A "block" is a container of data
---:

* A block contains (primarily) three things:
---:
	* A list of transactions (or generic data)
---:
	* A hash representation of the block
---:
	* A reference to the previous block in the chain

--newpage Recap
--heading Lets recap: What is a blockchain?
---:

A blockchain is a simple data structure, that is composed of "blocks" of data. Each of these blocks contains data, a cryptographic representation of itself, and a reference to the previous block in the list. They are typically distributed in a peer to peer fashion.
 
---:
--center Thats it.
---:

--center Really.

--newpage Cryptography
--heading What makes a blockchain secure?
---:

--center WTF. You said there was nothing more to blockchains...
---:

--center I lied. But not entirely.
---:

--center Buckle up, its about to get Computer Sciency.

--newpage Double Spending

--center Double spending is a problem our simple model of a blockchain will have. How do we prevent that?

--newpage Proof of work
--heading Proof of work; or, how a blockchain is secured from malicious actions
---:

* Before each block can be added to the chain, there has to be some provable action taken on it
---:

* This action needs to be difficult
---:

* But also easily verifiable

--newpage Hashing
--heading Proof of work: Hashing
---:

--center Remember earlier when I mentioned that each block contains a hash representation of itself?
---:

* Cryptographic Hashing
---:
	* Takes an input (binary representation of a block)
---:
	* Produces a fixed width output
---:
		* 000000000000000001f942eb4bfa0aeccb6a14c268f4c72d5fff17270da771b9
---:
	* Given the same input, will always produce the same output
---:

--center We can create criteria for an output hash that is computationally difficult to figure out, but very easy to verify is correct once solved
.
--newpage Hashing 2
--heading Proof of work: Hashing

--center An Example
---:

* Hashing function f(x) (Where f(x) == SHA256, in this case)
	* Acceptance criteria: output preceeded by six zeroes
	* For example, 000000f3d4c63d22743ddf
---:

* Use a nonce (random number)
---:

* f(x), x = BINARY(block_data) + nonce
---:
	* Run over and over until output meets criteria

---:
--newpage Mining
--heading Mining blocks
---:

* Mining is Bitcoin parlance for the previous proof of work
---:

* Mining is the act of producing the proof of work for a block
---:

* Once proven, a block is added to the blockchain
--newpage Proof of work Recap
--heading How does this secure the blockchain from modifications?
---:

* To modify a block, new proof of work for that block must be performed.
---:

* This changes the hash references for all newer blocks, meaning...
---:

* It is a A LOT of work re-prove every newer block in the chain
--newpage Other considerations
--heading Other considerations
---:

* Public Key Cryptography (used for transaction verification in an anonymous fashion)
---:

* Merkle Trees (used to verify individual transactions without knowing about the entire blockchain...~160GB)
---:

* UTXO Set
---:

* Memory Pool
---:

* Smart Contracts
--newpage Recap 2
--heading Lets recap (Because that was a lot of information)
---:

If we combine all the concepts we just talked about, we have a system that:
---:
	* Is distributed
---:
	* Is not controlled by any single entity
---:
	* Is peer to peer
---:
	* Is indelible
---:
	* Is verifiable
---:
	* Is anonymous
---:
	* Is secure
---:

--center Hopefully, you can see why everyone is excited about blockchains. But, what we do with them?
--newpage Blockchain uses
--heading Real world application of blockchains
---:

Cryptocurrency
---:

File storage
---:
	* FileCoin and the IPFS (Interplanetary File System)
---:

Crowd funding
---:
	* Ethereum and the DAO
---:

Governance
---:
--newpage Thank you, and Questions
--heading Thank you for attending!


--boldon
--center Questions?
--boldoff


--center Jeremy Cerise
--center mail@jeremyceri.se
--center github.com/jcerise

--beginoutput
--center Opinions expressed in this presentation are solely my own and do not express the views or opinions of my employer.
--endoutput
