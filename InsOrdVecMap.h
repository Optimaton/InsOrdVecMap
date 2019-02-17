#ifndef INS_ORD_VEC_MAP_H
#define INS_ORD_VEC_MAP_H

#include <initializer_list>
#include <utility>
#include <memory>
#include <iostream>

template <typename Key_, typename Tp_, 
          typename Allocator_ = std::allocator<std::pair<const Key_, Tp_> > >
class InsOrdVecMap
{
public:
  typedef Key_                                      key_type;
  typedef Tp_                                       mapped_type;
  typedef Allocator_                                allocator_type;
  typedef typename Allocator_::value_type           value_type;
  typedef typename Allocator_::reference            reference;
  typedef typename Allocator_::const_reference      const_reference;
  typedef typename Allocator_::difference_type      difference_type;
  typedef typename Allocator_::size_type            size_type;

  class iterator {
    public:
      typedef typename Allocator_::difference_type  difference_type;
      typedef typename Allocator_::value_type       value_type;
      typedef typename Allocator_::reference        reference;
      typedef typename Allocator_::pointer          pointer;
      typedef  std::random_access_iterator_tag      iterator_category;

      iterator();
      iterator(const iterator&);
      ~iterator();

      iterator& operator=(const iterator& rhs)
      {
          
      }

      bool operator==(const iterator& rhs) const
      {
  
      }

      bool operator!=(const iterator& rhs) const
      {
  
      }

      bool operator<(const iterator& rhs) const
      {

      }

      bool operator>(const iterator& rhs) const
      {
  
      }

      bool operator<=(const iterator& rhs) const
      {
  
      }

      bool operator>=(const iterator& rhs) const
      {
  
      }

      iterator& operator++() 
      {

      }

      iterator operator++(int)
      {
  
      }

      iterator& operator--() 
      {
        
      }

      iterator operator--(int)
      {
  
      }

      iterator& operator+=(size_type size)
      {
  
      }

      iterator operator+(size_type size) const
      {
  
      }

      friend iterator operator+(size_type size, const iterator&)
      {
  
      }

      iterator& operator-=(size_type size)
      {
  
      }

      iterator operator-(size_type size) const
      {
  
      }

      difference_type operator-(iterator) const
      {
  
      }

      reference operator*() const
      {
  
      }

      pointer operator->() const
      {
  
      }

      reference operator[](size_type pos) const
      {
  
      }
  };

  class const_iterator {
    public:
      typedef typename Allocator_::difference_type  difference_type;
      typedef typename Allocator_::value_type       value_type;
      typedef typename Allocator_::reference        reference;
      typedef typename Allocator_::pointer          pointer;
      typedef std::random_access_iterator_tag      iterator_category;

      const_iterator();
      const_iterator(const const_iterator&);
      const_iterator(const iterator&);
      ~const_iterator();

      const_iterator& operator=(const const_iterator& rhs)
      {
          
      }

      bool operator==(const const_iterator& rhs) const
      {
  
      }

      bool operator!=(const const_iterator& rhs) const
      {
  
      }

      bool operator<(const const_iterator& rhs) const
      {

      }

      bool operator>(const const_iterator& rhs) const
      {
  
      }

      bool operator<=(const const_iterator& rhs) const
      {
  
      }

      bool operator>=(const const_iterator& rhs) const
      {
  
      }

      const_iterator& operator++() 
      {

      }

      const_iterator operator++(int)
      {
  
      }

      const_iterator& operator--() 
      {
        
      }

      const_iterator operator--(int)
      {
  
      }

      const_iterator& operator+=(size_type size)
      {
  
      }

      const_iterator operator+(size_type size) const
      {
  
      }

      friend const_iterator operator+(size_type size, const const_iterator&)
      {
  
      }

      const_iterator& operator-=(size_type size)
      {
  
      }

      const_iterator operator-(size_type size) const
      {
  
      }

      difference_type operator-(const_iterator) const
      {
  
      }

      reference operator*() const
      {
  
      }

      pointer operator->() const
      {
  
      }

      reference operator[](size_type pos) const
      {
  
      }
  };

  typedef std::reverse_iterator<iterator> reverse_iterator;
  typedef std::reverse_iterator<const_iterator> const_reverse_iterator;

  InsOrdVecMap()
  {
    array_ = std::allocator_traits<allocator_type>::allocate(alloc_, reserved_size_); 
  }
  
  InsOrdVecMap(const InsOrdVecMap& rhs) 
  {
    reserved_size_ = rhs.capacity();
    array_ = std::allocator_traits<allocator_type>::allocate(alloc_, reserved_size_);
    *this = rhs;
    current_size_ = rhs.size();
  }

  InsOrdVecMap(size_type size) 
  {
  
  }

  InsOrdVecMap(std::initializer_list<std::pair<key_type, mapped_type>> ilist)
  {
      reserved_size_ = ilist.size() << 2;
      array_ = std::allocator_traits<allocator_type>::allocate(alloc_, reserved_size_); 
      for (auto& item : ilist) {
        std::allocator_traits<allocator_type>::construct(alloc_, array_, item);
        array_++;
        current_size_++;
      }
      array_ -= current_size_;
  }

  ~InsOrdVecMap()
  {
      
  }

  InsOrdVecMap& operator=(const InsOrdVecMap& rhs)
  {
    
  }

  bool operator==(const InsOrdVecMap& rhs) const
  {
  
  }

  bool operator!=(const InsOrdVecMap& rhs) const
  {
  
  }

  bool operator<(const InsOrdVecMap& rhs) const
  {
  
  }

  bool operator>(const InsOrdVecMap& rhs) const
  {
  
  }

  bool operator<=(const InsOrdVecMap& rhs) const
  {
  
  }

  bool operator>=(const InsOrdVecMap& rhs) const
  {
  
  }

  iterator begin()
  {
  
  }

  const_iterator begin() const
  {
  
  }
  
  const_iterator cbegin() const
  {
  
  }
  
  iterator end()
  {
  
  }

  const_iterator end() const
  {
  
  }

  const_iterator cend() const
  {
  
  }

  reverse_iterator rbegin()
  {
  
  }

  const_reverse_iterator rbegin() const
  {
  
  }

  const_reverse_iterator crbegin() const
  {
  
  }

  reverse_iterator rend()
  {
  
  }

  const_reverse_iterator rend() const
  {
  
  }

  const reverse_iterator crend() const
  {
  
  }

  reference front() const
  {
  
  }

  const_reference front()
  {
  
  }

  reference back()
  {
  
  }

  const_reference back() const
  {
  
  }

  template <class ...Args>
  void emplace_front(Args&&... )
  {
  
  }

  template <class ...Args>
  void emplace_back(Args&&... )
  {
  
  }

  void push_front(const std::pair<key_type, mapped_type>& elem)
  {
  
  }

  void push_front(const std::pair<key_type, mapped_type>&& elem) 
  {
  
  }

  void push_back(const std::pair<key_type, mapped_type>& elem)
  {
  
  }

  void push_back(const std::pair<key_type, mapped_type>&& elem) 
  {
  
  }

  void pop_front()
  {
  
  }

  void pop_back()
  {
  
  }


  reference operator[](key_type key_value) const
  {
    
  }

  const_reference operator[](key_type key_value) 
  {
  
  }

  reference at(size_type idx) const
  {

  }
  
  const_reference at(size_type idx)
  {
  
  }

  template <class ...Args>
  iterator emplace(const_iterator c_iter, Args&&... args)
  {
  
  }

  iterator insert(const_iterator c_iter, const std::pair<key_type, mapped_type>& elem)
  {
  
  }

  iterator insert(const_iterator c_iter, std::pair<key_type, mapped_type>&& elem)
  {
  
  }

  iterator insert(const_iterator c_iter, size_type size, std::pair<key_type, mapped_type>& elem)
  {
  
  }

  template <class ForwardIter>
  iterator insert(const_iterator c_iter, ForwardIter first, ForwardIter last)
  {
  
  }

  /*
   *iterator insert(const_iterator c_iter, std::initializer_list<std::pair<key_type, mapped_type> >)
   *{
   *
   *}
   */

  iterator erase(const_iterator c_iter)
  {
  
  }

  iterator erase(const_iterator first, const_iterator last)
  {
  
  }

  void clear()
  {
  
  }

  template <class ForwardIter>
  void assign(ForwardIter first, ForwardIter last)
  {
  
  }

  /*
   *void assign(std::initializer_list<std::pair<key_type, mapped_type>)
   *{
   *
   *}
   */

  void assign(size_type idx, const std::pair<key_type, mapped_type>& elem)
  {
  
  }

  void swap(InsOrdVecMap& insOrdVecMap) 
  {
  
  }

  size_type size() const
  {
    return current_size_; 
  }

  size_type capacity() const
  {
    return reserved_size_;
  }

  size_type max_size()const
  {
  
  }

  bool empty() const
  {
  
  }

  Allocator_ get_allocator() const
  {
  
  }
private:
  allocator_type alloc_;
  value_type* array_;
  size_type reserved_size_ = 4;
  size_type current_size_ = 0;
};


#endif // INS_ORD_VEC_MAP_H


